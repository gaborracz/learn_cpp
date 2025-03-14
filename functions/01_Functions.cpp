#include <iostream>

void functionB() { std::cout << "In function B.\n"; }

void functionA() {
  std::cout << "Function A starts.\n";
  functionB();
  std::cout << "Function A ends.\n";
}

int main() {
  std::cout << "Main starts.\n";

  functionA();

  std::cout << "Main ends.\n";

  return 0;
}
