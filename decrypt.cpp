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

//This function decrypts a Vigenere cipher encryption.
std::string decryptVigenere(std::string ciphertext, std::string keyword)
{
  std::string result = "";
  int index = 0;
  
  for(int i = 0; i < ciphertext.length(); i++)
  {
    char letter = ciphertext[i]; //converts substring into a char
    char c = shiftCharLeft(letter, (int)keyword[index] - 97);
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
