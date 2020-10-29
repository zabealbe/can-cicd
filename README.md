# CAN CI-CD (Fenice)
The purpose of this project is to manage the CANbus, the data flowing throught it and how the bus itself is accessed

## Subprojects
:open_file_folder: project root\
  ├ :open_file_folder: [id-generator](id-generator)\
  └ :open_file_folder: [flatbuf-schema-generator](flatbuf-schema-generator)

# How to use
## Create your network(s)
**Build the file tree**\
Each network should have its own folder and files as shown below:\
:open_file_folder: project root\
└:open_file_folder: config\
&nbsp;&nbsp;&nbsp;└:open_file_folder: [network name]\
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;└:page_with_curl: messages.json

**Configure messages.json**\
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
</details>
