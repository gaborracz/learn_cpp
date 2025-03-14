#include <iostream>

int main() {
  /*
   * This is an example of implementation-defined
   * behavior. It is defined by the implemntation
   * not by the C++ language standard.
   */

  std::cout << "The size of an integer value is: " << sizeof(int)
            << " bytes.\n";
  std::cout << "The size of a double value is: " << sizeof(double)
            << " bytes.\n";
  std::cout << "The size of a long value is: " << sizeof(long) << " bytes.\n";
  std::cout << "The size of a short value is: " << sizeof(short) << " bytes.\n";
  std::cout << "The size of a character is: " << sizeof(char) << " byte.\n";
  std::cout << "The size of an int pointer is: " << sizeof(int *)
            << " bytes.\n";

  return 0;
}
