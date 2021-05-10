# Naked Generator
Naked Generator is a serialization/deserialization library generator, it generates source code
for various languages which can then be used to parse raw binary data to a structured format
such as structs or classes depending on the language.

For more in-depth information check out [internals](#internals) section.

# How to use
### [Configure your networks](../README.md#how-to-use)
### Configure config.py
:open_file_folder: [naked_generator](/naked_generator)\
└ :open_file_folder: [config](config)\
&nbsp;&nbsp;&nbsp;&nbsp;└:page_with_curl: [config.py](config/config.py)


Here's a breakdown of what you will find:
```console
[network]
```
This is a special tag that can be used in any folder path, it identifies the network folder, meaning that
**for each network** there will be an equivalent path with the ```[network]``` string replaced by the network's name
```python
MERGE_NETWORKS = False
```
MERGE_NETWORKS enables/disables the networks merging function. If enabled all the networks found will be internally
merged, and the outputs will be produced accordingly
```python
NETWORK_FILE = "../config/[network]/network.json"
NETWORK_FILE_VALIDATION_SCHEMA = "config/network_schema_nakedgenerator.json"
```
NETWORK_FILE is the input messages description file, the syntax is as any other path,
except for ```[network]``` tag.\
NETWORK_FILE_VALIDATION_SCHEMA is the schema against which the network.json will be validated
```python
SCHEMA_LOCATION = "out/[network]/schema.json"
```
FLATBUF_SCHEMA_FILE is the generated flatbuffer schema file, the syntax is as any other path,
exept for ```[network]``` tag
```python
ENDIANNESS = "little"  # Can be either little or big
```
ENDIANNESS is how the data traveling the medium is represented, it does not affect the data that
the end user will see, but it might affect performance
```python
OUTPUT_DIR = "out/"
```
OUTPUT_DIR is the directory where you will find the generated sources

# Internals
Naked Generator is a zero overhead serialization library, meaning it does not add any metadata
to the resulting binary data. For that reason it's ideal for payload size constrained data
transfer such as the CAN bus which can go as low as 8 byte of payload for a single packet.