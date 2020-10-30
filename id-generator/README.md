# Message IDs generation
This subproject manages the id generation for all the messages on the CANbus
# How to use
### [Configure your networks](../README.md#how-to-use)

### Run it!
Requirements
+  Python >=3.6


```console
python main.py network_folder [second_network_folder] [third] [...]
```
if you specify more than one network folder the networks will be merged\
Generated files:\
:open_file_folder: [flatbuf-schema-generator](flatbuf-schema-generator)\
└ :open_file_folder: [out](out)\
&nbsp;&nbsp;&nbsp;&nbsp;└ :open_file_folder: [networkExample](out/networkExample)\
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;└ :page_with_curl: [ids.json](out/networkExample/ids.json)

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


Why? Hard to explain, just know that if many messages with the same topic had the same priority we would have to shift every other topic's messages in order to guarantee their priority. For that reason we had to divide the 64 avaible messages per topic in 8 fixed intervals, each one for a priority level, leading to 8 messages per priority per topic.
