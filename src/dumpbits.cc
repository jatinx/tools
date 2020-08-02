#include <iostream>
#include <utility>
#include <bitset>
#include <cstring>

#include "common.h"

int main(int argc, char **argv) {
  if (argc <= 1) {
    error_message("No Argument Provided", ACTION::DIE);
  }
  std::cout << "Num "
            << "\t :: "
            << "Binary" << std::endl;
  for (int i = 1; i < argc; i++) {
    int len = std::strlen(argv[i]);
    if (len <= 0) {
      error_message("Length is zero", ACTION::CONTINUE);
      continue;
    }
    if (len <= 4) {
      std::cout << argv[i] << "\t:: " << std::bitset<16>(std::stoi(argv[i]))
                << std::endl;
      continue;
    }
    if (len <= 9) {
      std::cout << argv[i] << "\t:: " << std::bitset<32>(std::stoi(argv[i]))
                << std::endl;
      continue;
    } else {
      std::cout << argv[i] << "\t:: " << std::bitset<64>(std::stol(argv[i]))
                << std::endl;
      continue;
    }
  }
}
