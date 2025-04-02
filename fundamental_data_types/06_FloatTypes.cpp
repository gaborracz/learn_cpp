#include <cstdlib>
#include <ios>
#include <iostream>
#include <limits>

int main() {
  // Print bool as true or false rather than 1 or 0.
  std::cout << std::boolalpha;

  // Print true if the following primitive types
  // are IEEE 754 compliant.
  std::cout << "float: " << std::numeric_limits<float>::is_iec559 << '\n';
  std::cout << "double: " << std::numeric_limits<double>::is_iec559 << '\n';
  std::cout << "long double: " << std::numeric_limits<long double>::is_iec559
            << '\n';

  return EXIT_SUCCESS;
}
