// Crypto lib by Osmar //

#include <Crypto.h>

//#######################################################################

const uint8_t cryptkey[16] = { (uint8_t) 0x2b, (uint8_t) 0x7e, (uint8_t) 0x15, (uint8_t) 0x16, (uint8_t) 0x28, (uint8_t) 0xae, (uint8_t) 0xd2, (uint8_t) 0xa6, (uint8_t) 0xab, (uint8_t) 0xf7, (uint8_t) 0x15, (uint8_t) 0x88, (uint8_t) 0x09, (uint8_t) 0xcf, (uint8_t) 0x4f, (uint8_t) 0x3c };

//######################################################################

void setup() {
  
  Serial.begin(9600);

  const String input = "EITA PORRA DO CARALHO, AGORA FUDEU, FILHA DA PUTA,\nCACETA BUCETA BUCETA DO CARALHO,\nOOOHHH BUCETAAAAA, CABELUUUDAA,\nFOI NO VIZINHO!!";
  String encrypted = encrypt(input);
  String decrypted = decrypt(encrypted);

  Serial.println("Input:\n"+input+"\n");
  Serial.println("Encrypted:\n"+encrypted+"\n");
  Serial.println("Decrypted:\n"+decrypted);

  Serial.print("\nSizes-> Input:");
  Serial.print(input.length());
  Serial.print(" Encrypted:" );
  Serial.print(encrypted.length());
  Serial.print(" Decrypted:");
  Serial.println(decrypted.length());
}

// the loop routine runs over and over again forever:
void loop() {
}
