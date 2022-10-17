/*
Author: Ashlee Tolentino
Course: CSCI-135
Instructor: Michael Zamansky
Assignment: Lab6

This program contains two decryption functions corresponding to the two ciphers.
*/

#include <iostream>
#include <string>
#include <cctype>
//#include "vigenere.h"
//#include "caesar.h"

// A helper function to shift one character by lshift
char shiftCharLeft(char c, int lshift) // lshift: 0 <= lshift <= 25
{
  char result = c;

  if(((int)c > 64 && (int)c < 91) || ((int)c > 96 && (int)c < 123))
  {
    result = c - lshift;
  }
  else
  {
    return result;
  }

  if(((int)c > 64 && (int)c < 91) && (int)c - lshift < 65)
  {
    result = ((c - lshift) + 26);
  }
  if(((int)c > 96 && (int)c < 123) && (int)c - lshift < 97)
  {
    result = ((c - lshift) + 26);
  }
  
  return result;
}

//This function decrypts a Caesar cipher encryption.
std::string decryptCaesar(std::string ciphertext, int rshift)
{
  std::string result = "";

  for(int i = 0; i < ciphertext.length(); i++)
  {
    char letter = ciphertext[i]; //converts substring into a char
    char c = shiftCharLeft(letter, rshift);
    std::string s(1, c); //converts char into a string
    result += s;
  }
  
  return result;
}
