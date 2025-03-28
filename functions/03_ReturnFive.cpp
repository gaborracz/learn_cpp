#include <iostream>

// this fucntion return its return value
// of five every time its called
int ReturnFive() {
  // the retutn statement provides the
  // value to be returned
  return 5;
}

int main() {
  std::cout << ReturnFive() << '\n';
  std::cout << ReturnFive() + 2 << '\n';

  // value 5 is returned but main does not
  // use it so it is ignored
  ReturnFive();

  // main() return zero to let the OS know
  // the program terminated without any error
  return 0;
}
