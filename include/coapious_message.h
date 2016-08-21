#ifndef __COAPIOUS_MESSAGE_H__
#define __COAPIOUS_MESSAGE_H__

#include "coapious_header.h"
#include "coapious_option.h"

#define COAPIOUS_PAYLOAD_MARKER = 0xFF;

typedef uint8_t * COAPIOUS_TOKEN;
typedef uint8_t * COAPIOUS_PAYLOAD;

typedef struct{
    COAPIOUS_HEADER hdr,
    COAPIOUS_TOKEN tkn,
    COAPIOUS_OPTION * options,
    COAPIOUS_PAYLOAD payload
}COAPIOUS_MESSAGE;

#endif
