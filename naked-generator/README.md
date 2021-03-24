# Naked serializer and deserializer generation
This subproject generates libraries for the serialization and deserialization of CAN messages' payload.
As one of the most used CAN specification is CAN 2.0A (with maximum payload size of only 8 bytes) the serialization
must have zero overhead.\
\
For more in-depth information check out [internals](#internals) section.

# Internals