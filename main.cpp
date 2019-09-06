#include "utility.hpp"
#include <cstring>
#include <iostream>

int main() {
  char *city = "Trondheim";
  std::cout << convertString(city) << std::endl;

  city = "Oslo";
  std::cout << convertString(city) << std::endl;
}
