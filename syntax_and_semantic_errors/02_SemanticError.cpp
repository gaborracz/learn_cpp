#include <iostream>

int main() {
  std::cout << "Enter two integers: ";
  int x{};
  int y{};

  // y is unused here
  std::cin >> x, y;

  // should redirect the second integer from the input
  // buffer into y
  // std::cin >> x >> y;

  std::cout << x << ' ' << y << '\n';

  return 0;
}
