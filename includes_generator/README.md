# Includes generator
This subproject generates all the files that will be useful for can interactions
#### Submodules required:
+ [id_generator](/id_generator)
+ [flatbuf_generator](/flatbuf_generator)

# How to use
### [Run id_generator](../id_generator/README.md#how-to-use)
### [Run flatbuf_generator](../flatbuf_generator/README.md#how-to-use)
### Configure your config.py
:open_file_folder: [includes_generator](/includes_generator)\
└ :open_file_folder: [config](config)\
&nbsp;&nbsp;&nbsp;&nbsp;└:page_with_curl: [config.py](config/config.py)

Here's a breakdown of what you will find:
```console
[network]
```
This is a special tag that can be used in any folder path, it identifies the network folder, meaning that **for each network** there will be an equivalent path with the ```[network]``` string replaced by the network's name
```python
IDS_FILE = "../id_generator/out/[network]/ids.json"
```
This is the message ids description file, the syntax is as any other path, exept for ```[network]``` tag.
```python
FLATBUF_SCHEMA_FILE = "../flatbuf-schema-generator/out/[network]/schema.fbs"
```
This is the flatbuffer schema file, the syntax is as any other path, exept for ```[network]``` tag.
```python
OUTPUT_DIR = "./out/[network]/"
```
This is the output folder for the generated files, the syntax is as any other path, exept for ```[network]``` tag, must
end with `/`.

### Requirements
+  Python >=3.6

### Run it!
```console
$ cd includes_generator
$ python main.py
```
Generated files:\
:open_file_folder: [includes_generator](includes_generator)\
 └ :open_file_folder: out\
&nbsp;&nbsp;&nbsp;&nbsp;└ :open_file_folder: [network-folder]\
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;└ :page_with_curl: ids.h
  
