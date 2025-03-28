#include <cstdlib>
#include <iostream>

// void functions do not return a value to the caller
void printHi() {
  std::cout << "Hi there!" << '\n';

  // there is no return value
}

int main() {
  // function is called, it has no return value
  printHi();

  return EXIT_SUCCESS;
}
