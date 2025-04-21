#include <cstdlib>
#include <iostream>

int main() {
  for (int i = 0; i < 128; i++) {
    if (i <= 32 || i == 127)
      std::cout << "Not printable character." << '\n';
    else
      std::cout << static_cast<char>(i) << '\n';
  }

  return EXIT_SUCCESS;
}
