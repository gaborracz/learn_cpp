#include <iostream>

int main() {
  // declaration without initialization
  int n1;
  std::cout << "Value of int n1 after default initialization: " << n1
            << std::endl;

  // declaration and copy initialization
  int n2 = 5;
  std::cout << "Value of int n2 after declaration and copy initialization: "
            << n2 << std::endl;

  // list initialization
  int n3 = {5};
  std::cout << "Value of n3 after list initialization: " << n3 << std::endl;

  // list initialization does not allow narrowing conversions
  // this line of code will result in compiler error message
  // int n4 = {4.5};
  // std::cout << "Value of n4 after list initialization to 4.5: " << n4 <<
  // std::endl;

  // value initialization is preferred over default initialization
  int n5 = {0};
  std::cout << "Value of n5 after value initialization: " << n5 << std::endl;

  // unused variable will generate a compile warning
  int n6 = {1};

  // unless if the following attribute is used:
  [[maybe_unused]] int n7{};
}
