#include <iostream>

int main() {

  // get a value from a user
  std::cout << "Enter an integer: ";
  int num{};
  std::cin >> num;

  // print that value doubled
  std::cout << num << " double is " << num * 2;

  return 0;
}
