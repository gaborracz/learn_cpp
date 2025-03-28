#include <cstdlib>
#include <iostream>

int add(int x, int y) { return x + y; }

int multiply(int x, int y) { return x * y; }

// unreferenced parameters can be declared without a name
void doSomething(int) {}

// it's nice to document what the unnamed parameter was or will be
void doSomething2(int /*count*/) {}

int doubleNumber(int x) { return x * x; }

int getNumber() {
  std::cout << "Enter an integer: ";
  int number{};
  std::cin >> number;

  return number;
}

int main() {
  std::cout << add(4, 5) << '\n';

  // expressions are evaluated first, then passed to
  // the function as arguments
  std::cout << add(1 + 2, 3 * 4) << '\n';

  int a{5};
  std::cout << add(a, a) << '\n';

  // first parameter can be passed to the function as it is
  // for the second parameter multiply() must be called then
  // its return value can be passed to add()
  std::cout << add(1, multiply(2, 3)) << '\n';

  std::cout << add(1, add(2, 3)) << '\n';

  std::cout << doubleNumber(getNumber());

  return EXIT_SUCCESS;
}
