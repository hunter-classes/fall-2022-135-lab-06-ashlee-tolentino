#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "caesar.h"
#include "vigenere.h"
#include "decrypt.h"

TEST_CASE("shiftChar"){
  CHECK(shiftChar('W', 5 == 'B'));
  CHECK(shiftChar('o', 10) == 'y');
  CHECK(shiftChar('!', 15) == '!');
}

TEST_CASE("Caesar Encryption"){
  CHECK(encryptCaesar("Way to Go!", 5) == "Bfd yt Lt!");
  CHECK(encryptCaesar("Hello, World!", 10) == "Rovvy, Gybvn!");
}

TEST_CASE("Vigenere Encryption"){
  CHECK(encryptVigenere("Way to Go!", "rain") == "Nag gf Gw!");
  CHECK(encryptVigenere("Hello, World!", "cake") == "Jevpq, Wyvnd!");
}

TEST_CASE("Caesar Decryption"){
  CHECK(decryptCaesar("Rovvy, Gybvn!", 10) == "Hello, World!");
  CHECK(decryptCaesar("Bfd yt Lt!", 5) == "Way to Go!");
}

TEST_CASE("Vigenere Decryption"){
  CHECK(decryptVigenere("Jevpq, Wyvnd!", "cake") == "Hello, World!");
  CHECK(decryptVigenere("Nag gf Gw!", "rain") == "Way to Go!");
}
