#include <cstdlib> // for EXIT_SUCCESS and EXIT_FAILURE
#include <iostream>

int getUserInput() {
  std::cout << "Enter an integer: ";
  int input{};
  std::cin >> input;

  return input;
}

int main() {
  int a{getUserInput()};
  int b{getUserInput()};

  std::cout << a << " + " << b << " equals " << a + b << '\n';

  return EXIT_SUCCESS;
}
