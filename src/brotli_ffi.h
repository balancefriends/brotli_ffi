#ifndef BROTLI_FFI_H
#define BROTLI_FFI_H

typedef unsigned char uint8_t;

typedef struct TVALUE {
	uint8_t* data;
	int length;
} TVALUE;

TVALUE *myCompress(char *str, char *path);
TVALUE *myDeCompress(uint8_t *data, unsigned long long length, char *path);
#endif //BROTLI_FFI_H
