# Flatbuffer schema generation
This subproject generates flatbuffer's schema based on message contents description
# How to use
### [Configure your networks](../README.md#how-to-use)
### Run it!


```console
python main.py network_folder [second_network_folder] [third] [...]
```
if you specify more than one network folder the networks will be merged\
Generated files:\
:open_file_folder: [flatbuf-schema-generator](flatbuf-schema-generator)\
 └ :open_file_folder: [out](out)\
&nbsp;&nbsp;&nbsp;&nbsp;└ :open_file_folder: [ExampleNetwork](out/ExampleNetwork)\
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;└ :page_with_curl: [schema.fbs](out/schema.fbs)
  
