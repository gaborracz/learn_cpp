#include "13_io.h"

int main() {
  // Ask two integers from the user.
  int x{readNumber()};
  int y{readNumber()};

  // Output the answer.
  writeAnswer(x + y);

  return 0;
}
