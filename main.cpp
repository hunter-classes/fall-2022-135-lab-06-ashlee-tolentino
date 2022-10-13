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

int main()
{
  char result = shiftChar('W', 5);
  std::cout << result << std::endl;
  
  return 0;
}
