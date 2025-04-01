#include <cstdint> // fixed width integers
#include <cstdlib> // for EXIT codes
#include <iostream>

int main() {
  // Variable x is always 32 bits.
  std::int32_t x{32767};
  std::cout << x + 1 << '\n';

  /*
   * Due to an oversight in C++ specification this
   * int8_t type could be treated as a character.
   * On my Mac this prints the character A.
   */
  std::int8_t y{65};
  std::cout << y << '\n';

  /*
   * Fast types provide the fastest types with a width
   * of at least the specified bits.
   * Least types provide the smallest types with a
   * width of at least the specified bits.
   * These types should be used with caution as they
   * may not resolve the same way on different architectures. */
  std::cout << "least 8: " << sizeof(std::int_least8_t) * 8 << " bits\n";
  std::cout << "least 16: " << sizeof(std::int_least16_t) * 8 << " bits\n";
  std::cout << "least 32: " << sizeof(std::int_least32_t) * 8 << " bits\n";
  std::cout << "fast 8: " << sizeof(std::int_fast8_t) * 8 << " bits\n";
  std::cout << "fast 16: " << sizeof(std::int_fast16_t) * 8 << " bits\n";
  std::cout << "fast 32: " << sizeof(std::int_fast32_t) * 8 << " bits\n";

  return EXIT_SUCCESS;
}
