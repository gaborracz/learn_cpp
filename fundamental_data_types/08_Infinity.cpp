#include <cstdlib>
#include <iostream>

int main() {
  double zero{0.0};

  /* Positive infinity. */
  double posinf{5.0 / zero};
  std::cout << posinf << '\n';

  /* Negative infinity. */
  double neginf{-5.0 / zero};
  std::cout << neginf << '\n';

  /* Positive zero. */
  double zero1{0.0 / posinf};
  std::cout << zero1 << '\n';

  /* Negative zero. */
  double zero2{-0.0 / posinf};
  std::cout << zero2 << '\n';

  /* Not a Number - mathematically invalid. */
  double nan{zero / zero};
  std::cout << nan << '\n';

  return EXIT_SUCCESS;
}
