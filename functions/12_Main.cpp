// Using <> tells the preprocessor to look for the header
// file in the compiler's default directories.
#include <iostream>

// This includes the header file for Multiply().
// Using "" tells the preprocessor that this is
// a header file that I wrote. First it will search
// the current directory.
#include "12_Multiply.h"

int main() {
  std::cout << "The product of 3 and 4 is " << multiply(3, 4) << '\n';
}
