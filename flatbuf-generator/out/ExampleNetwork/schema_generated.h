// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_SCHEMA_H_
#define FLATBUFFERS_GENERATED_SCHEMA_H_

#include "flatbuffers/flatbuffers.h"

struct MESSAGE_FROM_TEST1;

enum Status {
  Status_TEST_OK = 0,
  Status_TEST_FAIL = 1,
  Status_FATAL = 2,
  Status_MIN = Status_TEST_OK,
  Status_MAX = Status_FATAL
};

inline const Status (&EnumValuesStatus())[3] {
  static const Status values[] = {
    Status_TEST_OK,
    Status_TEST_FAIL,
    Status_FATAL
  };
  return values;
}

inline const char * const *EnumNamesStatus() {
  static const char * const names[4] = {
    "TEST_OK",
    "TEST_FAIL",
    "FATAL",
    nullptr
  };
  return names;
}

inline const char *EnumNameStatus(Status e) {
  if (flatbuffers::IsOutRange(e, Status_TEST_OK, Status_FATAL)) return "";
  const size_t index = static_cast<size_t>(e);
  return EnumNamesStatus()[index];
}

FLATBUFFERS_MANUALLY_ALIGNED_STRUCT(2) MESSAGE_FROM_TEST1 FLATBUFFERS_FINAL_CLASS {
 private:
  uint16_t current_;
  int8_t status_;
  int8_t padding0__;

 public:
  MESSAGE_FROM_TEST1()
      : current_(0),
        status_(0),
        padding0__(0) {
    (void)padding0__;
  }
  MESSAGE_FROM_TEST1(uint16_t _current, Status _status)
      : current_(flatbuffers::EndianScalar(_current)),
        status_(flatbuffers::EndianScalar(static_cast<int8_t>(_status))),
        padding0__(0) {
    (void)padding0__;
  }
  uint16_t current() const {
    return flatbuffers::EndianScalar(current_);
  }
  Status status() const {
    return static_cast<Status>(flatbuffers::EndianScalar(status_));
  }
};
FLATBUFFERS_STRUCT_END(MESSAGE_FROM_TEST1, 4);

#endif  // FLATBUFFERS_GENERATED_SCHEMA_H_