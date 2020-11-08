# CAN CI-CD (Fenice)
The purpose of this project is to manage the CANbus, the data flowing throught it and how the bus itself is accessed

## Subprojects
:open_file_folder: project root\
  ├ :open_file_folder: [id-generator](id-generator)\
  ├ :open_file_folder: [flatbuf-generator](flatbuf-generator)\
  └ :open_file_folder: [includes-generator](includes-generator)

# How to Use
Before running any of the subprojects you will need to do the following:

## Configure your network(s)
**Build the file tree**\
Each network should have its own folder and files as shown below:\
:open_file_folder: project root\
└:open_file_folder: config\
&nbsp;&nbsp;&nbsp;└:open_file_folder: [network name]\
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;└:page_with_curl: network.json

**Configure network.json**\
This file contains the description of the network and the network's messages in the following format:
<pre>
{
    "network_version": int,
    "enums": {
        "enum_name_1": [VALUE1, VALUE2, ...],
        "enum_name_2": [VALUE1, VALUE2, ...],
        ...
    }
    "messages": [{
        "name": string,
        "topic": string,
        "priority": int,
        "sending": [string],
        "receiving": [string],
        "contents": {
            "field_name_1": "type",
            "field_name_2": "type2",
            ...
        }
    }
    , ...]
}
</pre>


**Constraints you have to follow and description:**
<details><summary>SHOW</summary>

<pre>
"network_version": int
</pre>
The network version is used by the [includes-generator](includes-generator) module to ensure that
version mismatches between CAN devices can be identified.
___
    
    
<pre>
"shared_enums": object
</pre>
This is an optional field, can be used to reuse the same enum across different messages or use it
multiple times in the same message's payload.
To create a new shared enum insert the enum's name as the key and the enum values as a
strings array as shown below:
<pre>
"shared_enums": {
    "Shared_enum_1": ["ITEM1", "ITEM2", ...],
    ...
}
</pre>
The enum name must match the following regex: `^[A-Z][a-z0-9_]*$` and **its items** must match
`^[A-Z][A-Z0-9_]*$`.
___
    

<pre>
"messages": array
</pre>
This is the field where all the network messages are described, it is an array of objects and can have 
**at most 2048 items**
___


**Avoid message name conflicts across different networks**\
If you plan to have two different messages in two separate networks having the same name you **can't** use the merge function on those two networks.
On the other hand if the two messages are **identical**, meaning that they are actually the same message but used on multiple networks you may merge them.
___
    
    
<pre>
"name": string
</pre>
This field **must be unique** for each message, and should contain only UPPERCASE letters and "_"
___


<pre>
"topic": string
</pre>
This field can be the same across **at most 64 messages**, meaning a topic can contain at most 64 messages.
The characters you should use are all UPPERCASE letters and "_".
Messages should be subdivided in topics keeping in mind that the topic will be used by CAN devices to discriminate wether a message is interesting or not.
___

<pre>
"priority": int
</pre>
This field can can be an **integer from 0 to 7**, the higher the value the more important the message.
You can have **at most 8 messages** with the same combination of **priority and topic**, if you have more you must create a new topic or assign a different priority to some of them.
___
<pre>
"sending": [string]
</pre>
This field indicates the receiving device(s), **can be more than one**.\
The characters you should use are all UPPERCASE letters and "_".
If there is more than one sending device insert each one as a different array element.\
If there is only one sending device use an array with a single element.
___
<pre>
"receiving": [string]
</pre>
This field indicates the receiving device(s), **can be more than one**.\
The characters you should use are all UPPERCASE letters and "_".
If there is more than one receiving device insert each one as a different array element.\
If there is only one receiving device use an array with a single element.
___
<pre>
"contents": {
    "field_name_1": "type",
    "field_name_2": "type2",
    ...
}
</pre>
This field describes the message's payload, the overall size can be **at most 8 bytes**.\
Each value contained in the payload must be indicated with its name and its type.\
The name must satisfy this regex: `^[A-Za-z][A-Za-z0-9_]*$`.\
The type can be one of the following:
+ 1 byte: `bool`, `int8`, `uint8`
+ 2 bytes: `int16`, `uint16`
+ 4 bytes: `int32`, `uint32`, `float32`
+ 8 bytes: `int64`, `uint64`, `float64`

You can also use the `enum` type which has a size of 1 byte. to use it simply specify the field
name and the enum values with an array of strings as shown below:
<pre>
"contents": {
    "field_name": ["ITEM1", "ITEM2", ...]
}
</pre>
You can have **at most 255 items** per enum. If you wish to use a shared enum you can simply 
by using its name as the right hand side value:
<pre>
"contents": {
    "field_name": "Shared_enum_name"
}
</pre>

</details>


## Run it!
This project can be used in a couple of ways, the first one being the coolest:
### The automated way
:open_file_folder: project root\
  └ :open_file_folder: [config](config)
  

Any **commit** to this directory will trigger GitHub's actions workflow as described in [this file](.github/workflows/run-all.yml),\
you will find the generated files under the **:open_file_folder:out/** folder of each each module.

### The manual way
Any subproject is a standalone module. However some subprojects may have the specific job to generate configurations for other subprojects. Of course those files could be manually created but if you want to run the full CICD stack you must use the projects in the order [shown above](#subprojects).
