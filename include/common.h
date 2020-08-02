#pragma once
#include <iostream>

typedef enum ACTION { DIE = 0, CONTINUE } ACTION;

void error_message(const std::string str, ACTION a) {
  std::cerr << str << std::endl;
  switch (a) {
  case DIE:
    exit(1);
    break; // lol why
  case CONTINUE:
    return;
    break;
  default:
    return;
  }
}
