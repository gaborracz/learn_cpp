#include <cstdlib>
#include <iostream>

bool isEqual(int x, int y) { return x == y; }

int absoluteValue(int x) {
  if (x < 0)
    return -x;

  return x;
}

int main() {
  int x{};
  std::cout << "Enter an integer: ";
  std::cin >> x;

  if (x == 0)
    std::cout << "The value is zero." << '\n';
  else
    std::cout << "The value is non-zero." << '\n';

  // Chaining if statements.
  if (x < 0)
    std::cout << "The value is negative." << '\n';
  else if (x > 0)
    std::cout << "The value is positive." << '\n';
  else
    std::cout << "The value is zero." << '\n';

  int a{2};
  int b{3};

  // Boolean return values.
  if (isEqual(a, b))
    std::cout << a << " and " << b << " are equal." << '\n';
  else
    std::cout << a << " and " << b << " are not equal." << '\n';

  /*
   * Non-Boolean conditionals.
   * if ( x ) means x is non-zero and non-empty.
   */
  if (x)
    std::cout << x << " is non-zero and non-empty." << '\n';

  // If statemnet and early returns.
  std::cout << "Absolute value of " << x << " is " << absoluteValue(x)
            << ". \n";

  return EXIT_SUCCESS;
}
