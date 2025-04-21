#include <cstdlib>
#include <iomanip> // for std::setprecesion()
#include <iostream>

int main() {

  std::cout << 9.878745 << '\n';
  std::cout << 9.878745f << '\n';

  /* This will print 6 significant digits by default, */
  std::cout << 0.979217492741924f << '\n';

  /*
   * Floating point precision can be modified with
   * output manipulators.
   */
  std::cout << std::setprecision(20);
  std::cout << 0.9123123121379217492741924f << '\n';

  /*
   * Double is more precise than float.
   * Though all of the floating point numbers have
   * precision problems.
   */

  double d1{0.1};
  std::cout << std::setprecision(6);
  std::cout << d1 << '\n';
  std::cout << std::setprecision(17);
  std::cout << d1 << '\n';

  double d2{1.0};
  /* Should be 1.0 */
  double d3{0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1};
  std::cout << (d2 == d3) << '\n';
  std::cout << d2 << '\n';
  std::cout << d3 << '\n';

  return EXIT_SUCCESS;
}
