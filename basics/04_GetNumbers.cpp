#include <iostream>

int main() {
  std::cout << "Enter a number: ";

  int number{};       // define and value-initialize a variable
  std::cin >> number; // get a number from keyboard

  std::cout << "You entered: " << number << "\n";

  int n1{};
  int n2{};

  std::cout << "Enter two numbers separated by spaces: ";
  std::cin >> n1 >> n2;
  std::cout << "You entered " << n1 << " and " << n2 << "\n";

  return 0;
}
