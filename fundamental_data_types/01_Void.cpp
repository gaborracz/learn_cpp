#include <cstdlib>
#include <iostream>

/*
 * Void is an incomplete type, it's declared
 * but not yet defined.
 * Most commonly used in functions to indicate
 * no value is returned by the function.
 */
void printNumber(int number) { std::cout << number << '\n'; }

int main() {
  printNumber(5);

  return EXIT_SUCCESS;
}
