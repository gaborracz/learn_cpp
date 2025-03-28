#include <cstdlib>
#include <iostream>

int getNumber() {
  std::cout << "Enter a number: ";
  int input{};
  std::cin >> input;

  return input;
}

// - this function has an integer parameter called x
// - parameters are variables declared in the function's header

void printDouble(int x) { std::cout << x << " doubled is " << x * 2 << '\n'; }

int main() {

  int num{getNumber()};

  // This caller has to pass exactly one integer
  // parameter to the function.
  //
  // - value of each argument is copied into the matching parameter,
  //   this is called copy initialization
  // - this process called pass by value and these parameters are
  //   called value parameters
  printDouble(num);

  // return value can be used as argument
  printDouble(getNumber());

  return EXIT_SUCCESS;
}
