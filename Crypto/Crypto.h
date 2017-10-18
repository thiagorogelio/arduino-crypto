#ifndef _AES_H_
#define _AES_H_

#include <stdint.h>
#include <WString.h>

extern const uint8_t cryptkey[16];

void AES_ECB_encrypt(const uint8_t* input, const uint8_t* key, uint8_t *output, const uint32_t length);
void AES_ECB_decrypt(const uint8_t* input, const uint8_t* key, uint8_t *output, const uint32_t length);
String encrypt(String str);
String decrypt(String str);

#endif // _AES_H_

