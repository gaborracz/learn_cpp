#include <cstdlib>
#include <iostream>

/*
 * Keywords starting with # are called directives.
 * Preprocessing directives control the behavior of the
 * preprocessor. Each directive occupies one line starting
 * wiht # followed by the directive name and its arguments.
 */
#define ENABLE_DEBUG

int getUserInput() {
/*
 * The preprocessor only includes the code between
 * #ifdef and #endif if the ENABLE_DEBUG ENABLE_DEBUG macro
 * is defined.
 */
#ifdef ENABLE_DEBUG
  std::cerr << "getUserInput() called\n";
#endif

  std::cout << "Enter a number: ";
  int x{};
  std::cin >> x;

  return x;
}

int main() {
#ifdef ENABLE_DEBUG
  std::cerr << "main() called\n";
#endif

  int x{getUserInput()};
  std::cout << "You entered: " << x << '\n';

  return EXIT_SUCCESS;
}
