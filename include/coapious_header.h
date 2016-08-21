#ifndef __COAPIOUS_HEADER_H__
#define __COAPIOUS_HEADER_H__

#define COAPIOUS_COAP_VERSION 1

typedef enum{
    GET    = 0x01,
    POST   = 0x02,
    PUT    = 0x03,
    DELETE = 0x04
}COAPI0US_MESSAGE_VERB;

typedef enum{
    CON = 0x00, //Request - Confirmable
    NON = 0x01, //Request - Conconfirmable
    ACK = 0x02, //Response or Empty - Acknowledgement
    RST = 0x03  //Empty - Reset
}COAPI0US_MESSAGE_TYPE;

typedef enum{
    EMPTY                      = 0x00, //0.00
    CREATED                    = 0x41, //2.01
    DELETED                    = 0x42, //2.02
    VALID                      = 0x43, //2.03
    CHANGED                    = 0x44, //2.04
    CONTENT                    = 0x45, //2.05
    BAD_REQUEST                = 0x80, //4.00
    UNAUTHORIZED               = 0x81, //4.01
    BAD_OPTION                 = 0x82, //4.02
    FORBIDDEN                  = 0x83, //4.03
    NOT_FOUND                  = 0x84, //4.04
    METHOD_NOT_ALLOWED         = 0x85, //4.05
    NOT_ACCEPTABLE             = 0x86, //4.06
    PRECONDITION_FAILED        = 0x8C, //4.12
    REQUEST_ENTITY_TOO_LARGE   = 0x8D, //4.13
    UNSUPPORTED_CONTENT_FORMAT = 0x8F, //4.15
    INTERNAL_SERVER_ERROR      = 0xA0, //5.00
    NOT_IMPLEMENTED            = 0xA1, //5.01
    BAD_GATEWAY                = 0xA2, //5.02
    SERVICE_UNAVAILABLE        = 0xA3, //5.03
    GATEWAY_TIMEOUT            = 0xA4, //5.04
    PROXYING_NOT_SUPPORTED     = 0xA5  //5.05
}COAPIOUS_MESSAGE_CODE;

typedef struct{
    uint8_t attributes,
    COAPIOUS_MESSAGE_CODE code,
    uint16_t id
}COAPIOUS_MESSAGE_HEADER;

#endif
