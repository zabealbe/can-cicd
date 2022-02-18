# CAN CICD
The purpose of this project is to manage **any** can network, the data flowing throught it, its serialization/deserialization
and the interactions with the bus itself

CAN CICD was born to solve the many issues regarding the CAN network arised from [Formula SAE](https://en.wikipedia.org/wiki/Formula_SAE)
design competition.

This project **fixes** the following problems:

+ Lack of a single source of truth for the CAN network description (hassle-free alternative to DBC files)
+ Human error during the development (deserialization errors, wrong bitrate, etc.)
+ Desynchronization between different nodes (ie. a message id has changed and the developer forgot to update the code)
+ Message loss due to conflicting ids or wrong id priority
+ Lack of visual representation of message definitions, useful during the development process

Features:
+ Network description format:
    + json-based, simple, hassle-free and powerful
    + single source of truth
+ Automatic message ids generation:
    + accounts for priority assigning **lower ids** to **higher priority** messages
    + ids can be filtered by masking the least significant bits and filtering by **topic**
    + generation of **masks** and **filters** based on the concept of **topic**, filter by the topics that your device has interest in
+ Automatic source code generation for c, c++, python and javascript:
    + serialization/deserialization code generation with zero-copy zero-overhead
    + header files with **constants** and **types**
    + header files with **can configiration** such as bitrate, frequency, etc.
+ Spreadsheet generation:
    + visual representation of the can networks with messages payloads, ids, topics, etc.

## Subprojects
:open_file_folder: project root\
  ├ :open_file_folder: [id_generator](id_generator)\
  ├ :open_file_folder: [naked_generator](naked_generator)\
  ├ :open_file_folder: [includes_generator](includes_generator)\
  └ :open_file_folder: [sheet_generator](sheet_generator)

# How to Use
1. Fork [this template repo](https://github.com/zabealbe/can-cicd-forkme)
2. Commit your customized network config files under **:open_file_folder:** [networks](https://github.com/zabealbe/can-cicd-forkme/networks)
3. Push your commits on GitHub, sit back, relax and [the actions](https://github.com/zabealbe/can-cicd-forkme/.github/workflows/) will do the rest!
4. Once finished a release will be generated, and you will find your freshly baked assets as **release files**. For usability the same files will be present under the branch **build**

## How to configure your network(s)
### Build the file tree
Each network should have its own folder and files as shown below:\
:open_file_folder: project root\
└:open_file_folder: networks\
&nbsp;&nbsp;&nbsp;└:open_file_folder: [network name]\
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;├:page_with_curl: network.json\
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;└:page_with_curl: canconfig.json

### Configure network.json
This file similarly to the DBC format contains the full network definition in a custom json format\
\
The json structure is as follows:
```yaml
{
    "network_version": decimal,
    "max_payload_size": integer,
    "custom_types": {
        "type1_name": {
            "base_type": string,
            ...
        },
        "type2_name": {
            "base_type": string,
            ...
        },
        ...
    }
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

### Fields for each custom type in "custom_types"
TODO

### Fields for each message in "messages"
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
Used by: [includes-generator](includes-generator)

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

Required by: [naked_generator](naked_generator)


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

The complete syntax describes the enum type name and the actual field name.
Enum name must start with an Uppercase letter and may contain lowercase letters, 
numbers and "_".
Enum type name and field name must be separated by ": ".\
In the concise version you don't need to specify the enum's name as it will be created internally
by capitalizing the field name's first letter.

`field1_name: [...]` will result in an enum called `Field1_name`.

If the same enum (same name, same items) is used multiple times within the same message or across 
different messages it will be represented with a single enum type, however items differences will 
result in an error.
</details>


### Configure canconfig.json
This file contains the parameters required by can devices to properly connect and communicate with the network,
such as the clock frequency and the bitrate.\
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
Follow the steps described [here](#how-to-use) and use the newly forked repo as a submodule for your projects,
the **branch build** will contain the generated files.

Alternatively you can manually download the assets from the generated release page.