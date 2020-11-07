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
This file contains the description of all the network's messages in the following format:
<pre>
[{
    "name": string,
    "topic": string,
    "priority": int,
    "sending": [string],
    "receiving": [string],
    "contents": {
        "field_name": "type",
        "field2_name": "type"
    }
}
, ...]
</pre>


**Constraints you have to follow:**
<details><summary>SHOW</summary>

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
    "field_name_2": "type"
}
</pre>
This field describes the message's payload, the size can be **at most 8 bytes**.\
Each value contained in the payload must be indicated with its name and its type.\
The name must satisfy this regex: `^[A-Za-z][A-Za-z0-9_]*$`.\
The type can be one of the following:
+ 1 byte: `bool, int8, uint8, enum`
+ 2 bytes: `int16, uint16`
+ 4 bytes: `int32, uint32, float32`
+ 8 bytes: `int64, uint64, float64`

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
