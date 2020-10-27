# Message IDs generation
This subproject manages the id generation for all the messages on the CANbus
# How to use
## Create your network(s)

Each network should have a network folder\
:open_file_folder: project root\
└:open_file_folder: [network name]


And the following file\
:open_file_folder: project root\
└:open_file_folder: [network name]\
&nbsp;&nbsp;&nbsp;└:page_with_curl: messages.json

## Configure messages.json
This file contains the description of all the network's messages in the following format:
<pre>
[{
    "name": string,
    "topic": string,
    "priority": int
}
, ...]
</pre>
**Constraints you have to follow:**


<pre>
"name": string
</pre>
This field **must be unique** for each message, and should contain only UPPERCASE letters and "_"


<pre>
"topic": string
</pre>
This field can be the same across **at most 64 messages**, meaning a topic can contain at most 64 messages.
The characters you should use are all UPPERCASE letters and "_".
Messages should be subdivided in topics keeping in mind that the topic will be used by CAN devices to discriminate wether a message is interesting or not.


<pre>
"priority": int
</pre>
This field can can be an **integer from 0 to 7**, the higher the value the more important the message.
You can have **at most 8 messages** with the same combination of **priority and topic**, if you have more you must create a new topic or assign a different priority to some of them.

# How it works
## Message structure
![](https://canlogger1000.csselectronics.com/img/CAN-Frame-Message-Parameters-Bit-Start-Length_2.png)

As you can see, the section ID is 11 bits long and this is the only part we are interested of.\
The id plays a role not only in identifying the message but will also describe the message's priority. A **lower** ID will mean **higher priority** in case of collision.
## Generation
the generated id must contain 3 very important pieces of information, each with a specific purpose:
+ [The macrocategory to which it belongs](#the-macrocategory)
+ [A way to uniquely identify the message type](#how-to-uniquely-identify-a-message-type)
+ [The message priority](#message-priority)


### The macrocategory
### AKA Topic
The CAN bus is a busy medium where the message you transmit is broadcasted to everyone else, for that reason it's important that every device connected to it has a fast way to discriminate interesting messages.\
Fortunately each CAN device has the possibility to filter messages by applying a mask to the id, this operation is done via hardware so it's very fast.

For this purpose the CAN messages must be grouped in topics, one topic can have **at most 64 messages** and one message **has exactly one topic**


<pre>
┌───────────Message's ID (11 bits)──────────┐
| _ | _ | _ | _ | _ | _ | x | x | x | x | x |
                        └Topic's ID (5 bits)┘
</pre>

As you can see the topic's ID is identified by a section of the message ID, in this case the last 5 bits (the least significant bits).\
For a CAN device this means can most messages can be filtered out by finding out what topics might be interesting and applying the appropriate mask on the last 5 bits of the ID.

### How to uniquely identify a message type
Each message must have a different ID from any other, that means that the combination of **all 11 bits** of the ID will correspond to **exactly one** type of message.\
In theory you could use a mask for each message you are looking for, applying it to the whole 11 bit ID, but most of the times the CAN device has less masks than the number of messages it listens for.

### Message priority
As described in the [message structure](#message-structure) the priority of a message is given by its ID, the lower the ID the higher the priority.\
Everything you need to know is that the priority you can assign to each message ranges **from 0 to 7** and that you can have **at most 8 messages** with the same combination of topic and priority.


Why? It's a bit tricky, and you, the end user, could just ignore the rest of this section, but keep in mind that constraint.

TODO
