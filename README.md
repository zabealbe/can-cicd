# CAN CI-CD (Fenice)
The purpose of this project is to manage the CANbus, the data flowing throught it and how the bus itself is accessed

## Index
- [ID generation](#message-ids-generation)
- [Flatbuf](#setup)

# Message IDs generation
This subproject manages the id generation for all the messages on the CANbus
## Location
:open_file_folder: project root
+ :open_file_folder: id-generator
## Message structure
![](https://canlogger1000.csselectronics.com/img/CAN-Frame-Message-Parameters-Bit-Start-Length_2.png)
As you can see, the section ID is 11 bits long and this is the only part we are interested of.\
The id plays a role not only in identifying the message but will also describe the message's priority. A **lower** ID will mean **higher priority** in case of collision.
## Generation
the generated id must contain 3 very important pieces of information, each with a specific purpose:
+ [The macrocategory to which it belongs](#the-macrocategory-(topic))
+ [A way to uniquely identify the message type](#how-to-uniquely-identify-a-message-type)
+ [The message priority](#message-priority)


### The macrocategory (topic)
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
