/*
Author: Ashlee Tolentino
Course: CSCI-135
Instructor: Michael Zamansky
Assignment: Lab6

This program reports all characters from the input together with their ASCII codes.
*/

#include <iostream>

int main()
{
  std::string input = "Cat :3 Dog";
  for(int i = 0; i < input.length(); i++)
  {
    std::cout << input[i] << " " << (int)input[i] << std::endl;
  }
  
  return 0;
}
