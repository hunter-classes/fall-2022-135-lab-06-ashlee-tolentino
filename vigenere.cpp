/*
Author: Ashlee Tolentino
Course: CSCI-135
Instructor: Michael Zamansky
Assignment: Lab6

This program contains a function that implements that Vigenere cipher encryption.
*/

#include <iostream>
#include <string>
#include <cctype>
#include "vigenere.h"
#include "caesar.h"

//This function implements the Vigenere cipher encryption
std::string encryptVigenere(std::string plaintext, std::string keyword)
{
  std::string result = "";
  int index = 0;
  
  for(int i = 0; i < plaintext.length(); i++)
  {
    char letter = plaintext[i]; //converts substring into a char
    char c = shiftChar(letter, (int)keyword[index] - 97);
    std::string s(1, c); //converts char into a string
    index++;
    if(((int)letter >= 0 && (int)letter < 65) || ((int)letter > 90 && (int)letter < 97) || ((int)letter > 122))
    {
      index--;
    }
    if(index == keyword.length())
    {
      index = 0;
    }

    result += s;
  }

  return result;
}
