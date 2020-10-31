# Flatbuffer schema generation
This subproject generates flatbuffer's schema based on message contents description
# How to use
### [Configure your networks](../README.md#how-to-use)
### Configure config.py
:open_file_folder: [flatbuf-schema-generator](flatbuf-schema-generator)\
└ :page_with_curl: [config.py](config.py)


Here's a breakdown of what you will find:
```console
[network]
```
This is a special tag that can be used in any folder path, it identifies the network folder, meaning that **for each network** there will be an equivalent path with the ```[network]``` string replaced by the network's name
```python
MESSAGES_FILE = "../config/[network]/messages.json"
```
This is the input messages description file, the syntax is as any other path, exept for ```[network]``` tag.
```python
OUTPUT_FILE = "out/[network]/schema.fbs"
```
This is the generated flatbuffer schema file, the syntax is as any other path, exept for ```[network]``` tag.

### Run it!
Requirements
+  Python >=3.6

```console
python main.py
```
Generated files:\
:open_file_folder: [flatbuf-schema-generator](flatbuf-schema-generator)\
 └ :open_file_folder: [out](out)\
&nbsp;&nbsp;&nbsp;&nbsp;└ :open_file_folder: [[network folder]](out/ExampleNetwork)\
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;└ :page_with_curl: [schema.fbs](out/schema.fbs)
  
