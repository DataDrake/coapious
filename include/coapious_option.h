#ifndef __COAPIOUS_MESSAGE_OPTION_H__
#define __COAPIOUS_MESSAGE_OPTION_H__

#define COAPIOUS_READ_EXT_DELTA8   0x0D
#define COAPIOUS_READ_EXT_DELTA16  0x0E
#define COAPIOUS_READ_EXT_LENGTH8  0x0D
#define COAPIOUS_READ_EXT_LENGTH16 0x0E

typedef enum{
    IF_MATCH       = 0x01,
    URI_HOST       = 0x03,
    ETAG           = 0x04,
    IF_NONE_MATCH  = 0x05,
    URI_PORT       = 0x07,
    LOCATION_PATH  = 0x08,
    URI_PATH       = 0x0B,
    CONTENT_FORMAT = 0x0C,
    MAX_AGE        = 0x0E,
    URI_QUERY      = 0x0F,
    ACCEPT         = 0x11,
    LOCATION_QUERY = 0x14,
    PROXY_URI      = 0x23,
    PROXY_SCHEME   = 0x27,
    SIZE_1         = 0x3C
}COAPIOUS_OPTION_NUMBER;

typedef struct{
    uint8_t record,
    uint8_t ext_delta[2],
    uint8_t ext_length[2],
    uint8_t * value
}COAPIOUS_OPTION;

#endif
