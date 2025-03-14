#include <iostream>

/*
 * This simple program reads an integer, store in
 * and prints two and three times the value of that number.
 *
 * @gracz - 2025.03.14
 */

int multiply(int n, int m) { return n * m; }

int main() {

  std::cout << "Enter an integer: ";

  int num{};
  std::cin >> num;

  std::cout << "Double " << num << " is: " << multiply(num, 2) << "\n";
  std::cout << "Triple " << num << " is: " << multiply(num, 3) << "\n";

  return 0;
}
