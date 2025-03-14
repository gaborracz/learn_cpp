#include <iostream>

int add(int a, int b) { return a + b; }

int subtract(int a, int b) { return a - b; }

int main() {
  int n1{};
  int n2{};

  std::cout << "Enter an integer: ";
  std::cin >> n1;
  std::cout << "Enter another integer: ";
  std::cin >> n2;

  std::cout << n1 << " + " << n2 << " is " << add(n1, n2) << ".\n";
  std::cout << n1 << " - " << n2 << " is " << subtract(n1, n2) << ".\n";

  return 0;
}
