# Includes generator
This subproject generates all the files that will be useful for can interactions
# How to use
### Configure your config.py
:open_file_folder: [includes-generator](includes-generator)\
└ :page_with_curl: [config.py](config.py)


Here's a breakdown of what you will find:
```python
IDS_FILE = "../id-generator/out/[network]/ids.json"
```
This is the message ids description file, the syntax is as any other path, exept for ```[network]``` tag.\
This tag means that inside  **:open_file_folder:../id-generator/out/** the software must look for **all folders** with a seach depth of 1, this will be the **:open_file_folder:network folder** of the homonym network. Inside each network folder there should be a file named **:page_with_curl:ids.json**
```python
FLATBUF_SCHEMA_FILE = "../flatbuf-schema-generator/out/[network]/schema.fbs"
```
This is the flatbuffer schema file, the syntax is as any other path, exept for ```[network]``` tag.\
This tag means that inside  **:open_file_folder:../flatbuf-schema-generator/out/** the software must look for **all folders** with a seach depth of 1, this will be the **:open_file_folder:network folder** of the homonym network. Inside each network folder there should be a file named **:page_with_curl:schema.fbs**
```python
OUTPUT_DIR = "./out/[network]"
```
This is the output folder for the generated files, the syntax is as any other path, exept for ```[network]``` tag.\
This tag means that inside  **:open_file_folder:out/** the software should create a folder for **each network** and fill each folder with the network's\
generated files.

### [Run id-generator](../id-generator/README.md#how-to-use)
### [Run flatbuf-schema-generator](../flatbuf-schema-generator/README.md#how-to-use)
### Run it!


```console
python main.py
```
Generated files:\
:open_file_folder: [includes-generator](includes-generator)\
 └ :open_file_folder: [out](out)\
&nbsp;&nbsp;&nbsp;&nbsp;└ :open_file_folder: [ExampleNetwork](out/ExampleNetwork)\
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;└ :page_with_curl: [ids.h](out/ids.h)
  
