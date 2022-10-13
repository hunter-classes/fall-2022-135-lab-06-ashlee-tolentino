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

// A helper function to shift one character by rshift
char shiftChar(char c, int rshift) // rshift: 0 <= rshift <= 25
{
  char result;
  result = c + rshift;
  return result;
}


/*
// Caesar cipher encryption
std::string encryptCaesar(std::string plaintext, int rshift)
{
  return "hi";
}
*/
