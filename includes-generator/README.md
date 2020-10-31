# Includes generator
This subproject generates all the files that will be useful for can interactions
# How to use
### [Run id-generator](../id-generator/README.md#how-to-use)
### [Run flatbuf-schema-generator](../flatbuf-schema-generator/README.md#how-to-use)
### Configure your config.py
:open_file_folder: [includes-generator](includes-generator)\
└ :page_with_curl: [config.py](config.py)


Here's a breakdown of what you will find:
```console
[network]
```
This is a special tag that can be used in any folder path, it identifies the network folder, meaning that **for each network** there will be an equivalent path with the ```[network]``` string replaced by the network's name
```python
IDS_FILE = "../id-generator/out/[network]/ids.json"
```
This is the message ids description file, the syntax is as any other path, exept for ```[network]``` tag.
```python
FLATBUF_SCHEMA_FILE = "../flatbuf-schema-generator/out/[network]/schema.fbs"
```
This is the flatbuffer schema file, the syntax is as any other path, exept for ```[network]``` tag.
```python
OUTPUT_DIR = "./out/[network]"
```
This is the output folder for the generated files, the syntax is as any other path, exept for ```[network]``` tag.

### Run it!
Requirements
+  Python >=3.6

```console
$ python main.py
```
Generated files:\
:open_file_folder: [includes-generator](includes-generator)\
 └ :open_file_folder: [out](out)\
&nbsp;&nbsp;&nbsp;&nbsp;└ :open_file_folder: [[network-folder]](out/ExampleNetwork)\
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;└ :page_with_curl: [ids.h](out/ids.h)
  
