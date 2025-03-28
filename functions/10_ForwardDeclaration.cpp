#include <iostream>

// forward declaration off add using function declaration
// Declaration tells the compiler about the existence of an
// identifier and its type information.
int add(int x, int y);

int main() {
  // this works because add is forward declared above
  std::cout << "The sum of 3 and 2 is " << add(3, 2) << '\n';

  return 0;
}

// body of add can be defined here
// Definition is a declaration that actually implements or
// initiates the identifier.
int add(int x, int y) { return x + y; }
