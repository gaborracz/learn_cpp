#include <climits> // for CHAR_BIT
#include <cstdlib> // for EXIT_SUCCESS
#include <iomanip> // for std::setw
#include <iostream>

int main() {
  std::cout << "A byte is " << CHAR_BIT << " bits.\n\n";

  // Justify output to the left.
  std::cout << std::left;

  std::cout << std::setw(16) << "bool: " << sizeof(bool) << " bytes\n";
  std::cout << std::setw(16) << "char: " << sizeof(char) << " bytes\n";
  std::cout << std::setw(16) << "short: " << sizeof(short) << " bytes\n";
  std::cout << std::setw(16) << "int: " << sizeof(int) << " bytes\n";
  std::cout << std::setw(16) << "long: " << sizeof(long) << " bytes\n";
  std::cout << std::setw(16) << "long long: " << sizeof(long long)
            << " bytes\n";
  std::cout << std::setw(16) << "float: " << sizeof(float) << " bytes\n";
  std::cout << std::setw(16) << "double: " << sizeof(double) << " bytes\n";
  std::cout << std::setw(16) << "long double: " << sizeof(long double)
            << " bytes\n";

  int x{};
  std::cout << std::setw(16) << "variable x: " << sizeof(x) << " bytes\n";

  return EXIT_SUCCESS;
}
