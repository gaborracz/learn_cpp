#include <cstdlib>
#include <iostream>

int main() {
  // assuem 4 bytes integers
  int max{2'147'483'647};
  std::cout << max << '\n';

  // This will cause integer overflow,
  // which is undefined behavior.
  max++;
  std::cout << max << '\n';

  // Integer division always produces an integer result.
  // Any fractional part is dropped (not rounded).
  std::cout << 5 / 4 << '\n';

  return EXIT_SUCCESS;
}
