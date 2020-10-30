# Includes generator
This subproject generates all the files that will be useful for can interactions
# How to use
### Configure your input files
:open_file_folder: [includes-generator](includes-generator)\
 └ :page_with_curl: [config.py](config.py)
 
### [Run id-generator](../id-generator/README.md#how-to-use)
### [Run flatbuf-schema-generator](../flatbuf-schema-generator/README.md#how-to-use)
### Run it!


```console
python main.py
```
if you specify more than one network folder the networks will be merged\
Generated files:\
:open_file_folder: [flatbuf-schema-generator](flatbuf-schema-generator)\
 └ :open_file_folder: [out](out)\
&nbsp;&nbsp;&nbsp;&nbsp;└ :page_with_curl: [schema.fbs](out/schema.fbs)
  