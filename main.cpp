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

int main()
{
  char result = shiftChar('!', 5);
  std::cout << result << std::endl;

  std::string result2 = encryptCaesar("Way to Go!", 5);
  std::cout << result2 << std::endl;

  std::string result3 = encryptVigenere("Hello, World!", "cake");
  std::cout << result3 << std::endl;
  
  return 0;
}
