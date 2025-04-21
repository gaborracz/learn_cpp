#include <cstdlib>
#include <iostream>

void print(double x) { std::cout << x << '\n'; }

void printInt(int x) { std::cout << x << '\n'; }

void printAscii() {
  std::cout << "Enter a single character: ";
  char ch{};
  std::cin.get(ch);
  std::cout << "ASCII code point for character " << ch
            << " is: " << static_cast<int>(ch) << '\n';
}

int main() {
  /*
   * Implicit type conversion.
   * Should be avoided.
   */
  print(5);      // 5 will be converted to 5.0
  printInt(5.5); // 5.5 will be converted to 5

  /* Explicitly convert 5.5 to 5 with static cast. */
  printInt(static_cast<int>(5.5));

  printAscii();

  return EXIT_SUCCESS;
}
