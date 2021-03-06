# Flatbuffer schema generation and compilation
This subproject generates flatbuffer's schema and compiles it based on message contents description

# How to use
### [Configure your networks](../README.md#how-to-use)
### Configure config.py
:open_file_folder: [flatbuf-generator](/flatbuf-generator)\
└ :open_file_folder: [config](config)\
&nbsp;&nbsp;&nbsp;&nbsp;└:page_with_curl: [config.py](config/config.py)


Here's a breakdown of what you will find:
```console
[network]
```
This is a special tag that can be used in any folder path, it identifies the network folder, meaning that **for each network** there will be an equivalent path with the ```[network]``` string replaced by the network's name
```python
MERGE_NETWORKS = False
```
MERGE_NETWORKS enables/disables the networks merging function. If enabled all the networks found will be internally merged and the outputs will be produced accordingly.
```python
NETWORK_FILE = "../config/[network]/network.json"
```
NETWORK_FILE is the input messages description file, the syntax is as any other path, exept for ```[network]``` tag.
```python
FLATBUF_SCHEMA_FILE = "out/[network]/schema.fbs"
```
FLATBUF_SCHEMA_FILE is the generated flatbuffer schema file, the syntax is as any other path, exept for ```[network]``` tag.

### Requirements
+  Linux or MacOs
+  Python >=3.6
+  FlatC (for any language except C)
    + https://github.com/zabealbe/flatc-musl
    + https://github.com/google/flatbuffers
+  FlatCC (for C specifically)
    + https://github.com/zabealbe/flatc-musl
    + https://github.com/dvidelabs/flatcc
    
### Run it!
```console
$ cd flatbuf-generator
$ python main.py
```
Generated files:\
:open_file_folder: [flatbuf-generator](flatbuf-generator)\
 └ :open_file_folder: [out](out)\
&nbsp;&nbsp;&nbsp;&nbsp;└ :open_file_folder: [[network folder]](out/ExampleNetwork)\
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;└ :page_with_curl: [schema.fbs](out/schema.fbs)\
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;└ :page_with_curl: [...] compiled schema files

