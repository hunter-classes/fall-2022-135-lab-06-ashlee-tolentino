/*
Author: Ashlee Tolentino
Course: CSCI-135
Instructor: Michael Zamansky
Assignment: Lab6

This program contains functions implementing Caesar cipher encryption.
*/

#include <iostream>
#include <string>
#include <cctype>
#include "caesar.h"
#include "vigenere.h"
#include "decrypt.h"

int main()
{
  char result = shiftChar('W', 5);
  std::cout << "Char: W\nshift: 5\nResult: " << result << std::endl;

  std::cout << "------------------------------------\n= Caesar Encryption =\n";

  std::string result2 = encryptCaesar("Hello, World!", 10);
  std::cout << "Plaintext: Hello, World!\nshift: 10\nCiphertext: " << result2 << std::endl;

  std::cout << "------------------------------------\n= Vigenere Encryption =\n";

  std::string result3 = encryptVigenere("Hello, World!", "cake");
  std::cout << "Plaintext: Hello, World!\nkeyword: cake\nCiphertext: " << result3 << std::endl;

  std::cout << "------------------------------------\n= Caesar Decryption =\n";

  std::string result4 = decryptCaesar("Rovvy, Gybvn!", 10);
  std::cout << "Ciphertext: Rovvy, Gybvn!\nshift: 10\nPlaintext: " << result4 << std::endl;
  
  
  return 0;
}
