# CAN CICD
The purpose of this project is to manage **any** can network, the data flowing throught it, its serialization/deserialization
and the interactions with the bus itself

## Subprojects
:open_file_folder: project root\
  ├ :open_file_folder: [id_generator](id_generator)\
  ├ :open_file_folder: [flatbuf_generator](flatbuf_generator)\
  ├ :open_file_folder: [naked_generator](naked_generator)\
  ├ :open_file_folder: [includes_generator](includes_generator)\
  └ :open_file_folder: [sheet_generator](sheet_generator)

# How to Use
Before running any of the subprojects you will need to do the following:

## Configure your network(s)
### Build the file tree
Each network should have its own folder and files as shown below:\
:open_file_folder: project root\
└:open_file_folder: networks\
&nbsp;&nbsp;&nbsp;└:open_file_folder: [network name]\
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;├:page_with_curl: network.json\
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;└:page_with_curl: canconfig.json

### Configure network.json
This file contains the description of all the network's messages.\
\
The json structure is as follows:
```yaml
{
    "network_version": decimal,
    "max_payload_size": integer,
    "messages": [ 
    {
        "name": string,
        "topic": string,
        "priority": integer,
        "sending": [ string ],
        "receiving": [ string ],
        "contents": {
            "field_name": "type",
            "field2_name": "type",
            ...
        }
    }
    , ... ]
}
```

**Description and constraints you have to follow:**
<details><summary>SHOW</summary>

###Fields for each message in "messages" array
Keywords used:
+ **Required**: this field must be present
+ **Required by**: indicates that the field must be present if the specified submodule is used
+ **Used by**: indicates that the field can either be present or omitted and that is used by the
  specified submodule
+ **Not required**: the field can be omitted
---
```yaml
"name": string
```
Required.

This field **must be unique** for each message, and should contain only UPPERCASE letters and "_"
___

```yaml
"topic": string
```
Required by: [id_generator](id_generator)

This field can be the same across **at most 64 messages**, meaning a topic can contain at most 64 messages.
The characters you should use are all UPPERCASE letters and "_", additionally it can't be named FIXED_IDS as it is
a reserved topic used internally.\
Messages should be subdivided in topics keeping in mind that the topic will be used by CAN devices to discriminate 
whether a message is interesting or not.
___

```yaml
"priority": int
```
Required by: [id_generator](id_generator)

This field can can be an **integer from 0 to 7**, the higher the value the more important the message.
You can have **at most 8 messages** with the same combination of **priority and topic**, if you have more you must create a new topic or assign a different priority to some of them.
___

```yaml
"sending": [string]
```
Not required.

This field indicates the sending device(s), **can be more than one**.\
The characters you should use are all UPPERCASE letters and "_".
If there is more than one sending device insert each one as a different array element.\
If there is only one sending device use an array with a single element.
___

```yaml
"receiving": [string]
```
Not required.

This field indicates the receiving device(s), **can be more than one**.\
The characters you should use are all UPPERCASE letters and "_".
If there is more than one receiving device insert each one as a different array element.\
If there is only one receiving device use an array with a single element.
___

```yaml
"description": string
```
Used by: [includes_generator](includes_generator)

This field contains a description for the message, the description will be included as a comment
in the generated files.
___

```yaml
"contents": {
    "field_name_1": "type",
    "field_name_2": "type",
    ...
}
```

Required by: [flatbuf_generator](flatbuf_generator)


This field describes the message's payload, can be left empty. The overall size can be **at most 8 bytes**.\
Each value contained in the payload must be indicated with its name and its type.\
The field name must satisfy this regex: `^[a-z][a-z0-9_]*$`.\
The type can be one of the following:
+ 1 byte: `bool, int8, uint8`
+ 2 bytes: `int16, uint16`
+ 4 bytes: `int32, uint32, float32`
+ 8 bytes: `int64, uint64, float64`

In addition you may also use an `enum` which has a size of 1 byte:
```yaml
"contents": {
    "field1_name": ["ITEM1", "ITEM2", ...]             // Concise syntax
    "Enum_name: field2_name": ["ITEM1", "ITEM2", ...]  // Complete syntax
}
```

The complete syntax describes the flatbuffers enum type name and the actual field name.
Enum name must start with an Uppercase letter and may contain lowercase letters, 
numbers and "_".
Enum type name and field name must be separated by ": ".\
In the concise version you don't need to specify the enum's name as it will be created internally
by capitalizing the field name's first letter.

`field1_name: [...]` will result in an enum called `Field1_name`.

If the same enum (same name, same items) is used multiple times within the same message or across 
different messages it will be represented by flatbuffers with a single enum type, however items differences will 
result in an error.
</details>


### Configure canconfig.json
This file contains the parameters required by can devices to properly connect to the interface,
such as the clock frequency.\
\
The json structure is as follows:
```yaml
{
    "canconfig_version": integer,
    "canconfig": { 
        "peripheral_clk_mhz": integer,
        "pref_sample_point_pct": decimal,
        "sync_jump_width": integer,
        "config_table": {
           "bit_rate_kbps": integer,
            "pre_scaler": integer,
            "time_quanta_amount": integer,
            "seg1": integer,
            "seg2": integer,
            "sample_point_pct": decimal     
        }    
    }
}
```

**Description and constraints you have to follow:**
<details><summary>SHOW</summary>

#TODO

</details>


## Workflow
This project can be used in a couple of ways, the first one being the coolest:
### The automated way
:open_file_folder: project root\
  └ :open_file_folder: [networks](networks)
  

Any **commit** to this directory will trigger GitHub's actions workflow as described in 
[this file](.github/workflows/run-all.yml). You will find the generated files in the branch **build** under the **:open_file_folder:** folder 
named after each submodule.

### The manual way
Any subproject is a standalone module. However some subprojects may have the specific job to generate configurations
for other subprojects. Of course those files could be manually created but if you want to run the full CICD stack you
must use the projects in the order [shown above](#subprojects).
