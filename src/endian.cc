#include <iostream>

int main() {
  uint64_t a = 0x0A0B0C0D;
  char *c = reinterpret_cast<char *>(&a);
  if (*c == 0x0A) {
    std::cout << "Big Endian" << std::endl;
  } else if (*c == 0x0D) {
    std::cout << "Little Endian" << std::endl;
  } else {
    std::cout << "God Knows what endian" << std::endl;
  }
}
