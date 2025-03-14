#include <iostream>

/*
 * This program asks the user to enter
 * three numbers, then prints the
 * numbers in the same order.
 */

int main() {
  int n1{};
  int n2{};
  int n3{};

  std::cout << "Enter three numbers separated by spaces: ";
  std::cin >> n1 >> n2 >> n3;
  std::cout << "You entered " << n1 << ", " << n2 << ", and " << n3 << ".\n";

  return 0;
}
