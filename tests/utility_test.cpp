#include "assert.hpp"
#include "utility.hpp"
#include <cstring>

int main() {
  char *city = "";
  ASSERT(convertString(city) == "");

  city = "Trondheim";
  ASSERT(convertString(city) == "Trondheim");

  city = "Oslo";
  ASSERT(convertString(city) == "Oslo");
}
