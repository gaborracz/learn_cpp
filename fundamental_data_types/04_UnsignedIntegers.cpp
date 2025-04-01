#include <cstdlib>
#include <iostream>

int main() {
  // Initialize an unsigned short int with max value.
  unsigned short x{65535};
  std::cout << "x is: " << x << '\n';

  // Value of x will outflow. Modulo wrap/around is used.
  // The value of x will divided by the maximum value of
  // the short unsigned integer and remainder will be stored.
  x++;
  std::cout << "x is: " << x << '\n';

  x++;
  std::cout << "x is: " << x << '\n';

  x = -1;
  std::cout << "x is: " << x << '\n';

  x = -2;
  std::cout << "x is: " << x << '\n';

  // If a mathematic operation has one signed and one unsigned
  // value, the signed value will usually be converted to unsigned.
  short u{3};
  unsigned short s{2};
  std::cout << s << " - " << u << " is " << s - u << '\n';

  // Comparing signed and unsigned values. These statements are
  // semantically correct, so there will be no compiler warning.
  s = 1;
  u = -1;

  if (s > u) {
    std::cout << "1 is greater than -1.\n";
  } else if (s < u) {
    std::cout << "-1 is greater than 1.\n";
  }

  return EXIT_SUCCESS;
}
