#include "common.h"
#include <cstring>
#include <iostream>

int main(int argc, char **argv) {
  if (argc != 4) {
    error_message("Invalid Number of Arguments, usage calc 1 + 2", ACTION::DIE);
  }

  // Validate operator
  if (strlen(argv[2]) != 1) {
    error_message("Length of operator > 1", ACTION::DIE);
  }
  char o = *argv[2];
  long long a = std::stol(argv[1]);
  long long b = std::stol(argv[3]);

  switch (o) {
  case '+':
    std::cout << a + b << std::endl;
    break;
  case '-':
    std::cout << a - b << std::endl;
    break;
  case 'x':
    std::cout << a * b << std::endl;
    break;
  case '/':
    std::cout << double(a) / b << std::endl;
    break;
  default:
    error_message("Supported Operators:: +, -, x, /", ACTION::DIE);
  }
}
