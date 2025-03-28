#include <cstdlib>
#include <iostream>

// Scope is a compile time property.
// Lifetime is a runtime property.
// They are enforced at different stages of the program.

int add(int x, int y) // x and y are created and enter scope
{
  // x and y are usuable only within add() - local scope
  return x + y;
} // x and y go out of scope and are destroyed here - lifetime ends

int main() {
  int a{5}; // a is created here - enters scope, lifetime starts
  int b{6}; // b is created here - enters scope, lifetime starts
            // a and be usuable only within main()

  std::cout << add(a, b) << '\n';

  return EXIT_SUCCESS;
} // a and b go out of scope and are destroyed, lifetime ends
