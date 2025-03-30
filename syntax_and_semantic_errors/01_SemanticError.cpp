#include <cstdlib>
#include <iostream>

int main() {
  int x;

  // Accessing uninitialized variable reuslts undefined behavior.
  std::cout << x << '\n';

  return EXIT_SUCCESS;
}
