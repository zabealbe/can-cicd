from enum import Enum
from struct import pack, unpack
from collections import namedtuple


MASTER_SYNC = namedtuple('MASTER_SYNC', 'time')
MASTER_SYNC_schema = '<I'

CELLBOARD_TOKEN = namedtuple('CELLBOARD_TOKEN', 'sender_cellboard time')
CELLBOARD_TOKEN_schema = '<BI'


def serialize_MASTER_SYNC(struct: MASTER_SYNC) -> bytearray:
	return pack(MASTER_SYNC, *tuple(struct))


def serialize_CELLBOARD_TOKEN(struct: CELLBOARD_TOKEN) -> bytearray:
	return pack(CELLBOARD_TOKEN, *tuple(struct))


def deserialize_MASTER_SYNC(buffer: bytearray) -> MASTER_SYNC:
	return MASTER_SYNC._make(unpack(MASTER_SYNC_schema, buffer))


def deserialize_CELLBOARD_TOKEN(buffer: bytearray) -> CELLBOARD_TOKEN:
	return CELLBOARD_TOKEN._make(unpack(CELLBOARD_TOKEN_schema, buffer))


