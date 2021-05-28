# Naked Generator C APIs

```c
/* Primary.h
...
typedef uint8_t Primary_Hv_Errors[1]; // bitset
#define Primary_Hv_Errors_default { 0 } // bitset filled with zeros
#define Primary_Hv_Errors_ERRTYPE_1 0
#define Primary_Hv_Errors_ERRTYPE_2 1
...
typedef enum __is_packed {
    Primary_Inverter_Status_OFF = 0,
    Primary_Inverter_Status_IDLE = 1,
    Primary_Inverter_Status_ON = 2,
} Primary_Inverter_Status;
...
typedef struct __is_packed {
    Primary_Hv_Errors errors;
    Primary_Inverter_Status inv_status;
    uint16_t pack_voltage;
} Primary_HV_STATUS;
*/
```

### Serialize a message
```c
// Allocate the buffer
uint8_t buffer[8];

// Serialize struct into buffer
serialize_HV_STATUS(&buffer, errors, pack_voltage, inv_status);
```

### Deserialize a message
```c
// Serialized data
uint8_t buffer = [8, 1, 254, 0];

// Create struct
Primary_HV_STATUS hv_errors;

// Deserialize buffer into struct
deserialize_HV_STATUS(&buffer, &hv_errors);
```

### Bitset
```c
// Initialize a bitset to 0
Primary_Hv_Errors bitset = Primary_Hv_Errors_default

// Set flag with name BIT_0 to TRUE
setBit(errors, Primary_Hv_Errors_BIT_0, TRUE);

// Flip flag with name BIT_1
flipBit(errors, Primary_Hv_Errors_BIT_1);

// Get flag with name BIT_1
bool value = getBit(errors, Primary_Hv_Errors_BIT_1);
```
