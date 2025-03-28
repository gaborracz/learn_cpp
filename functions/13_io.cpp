#include "13_io.h"
#include <iostream>

int readNumber() {
  std::cout << "Enter an integer: ";
  int input{};
  std::cin >> input;

  return input;
}

void writeAnswer(int answer) {
  std::cout << "Sum of the two numbers is: " << answer << '\n';
}
