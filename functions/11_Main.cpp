#include <iostream>

int add(int x, int y);

int main() {
  int a{1};
  int b{4};

  std::cout << a << " + " << b << " is " << add(a, b) << '\n';
}
