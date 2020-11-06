#ifndef IDS_H
#define IDS_H

/* TOPIC B */
#define TOPIC_B_MASK 00000011111
#define TOPIC_B_FILTER 00000000000
#define HV_STATUS 00000000000

/* TOPIC A */
#define TOPIC_A_MASK 00000011111
#define TOPIC_A_FILTER 00000000001
#define TLM_STATUS_CHANGED 01000000001
#define HV_VOLTAGE 01100000001
#define HV_CURRENT 01100100001
#define HV_TEMP 01101000001
#define HV_ERROR 00100000001

#endif
