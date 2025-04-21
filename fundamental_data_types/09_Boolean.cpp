#include <cstdlib>
#include <ios>
#include <iostream>

int main() {
  // Initialize a Boolean variable.
  bool b1{true};
  bool b2{false};

  // Default initialize to false.
  bool b3{};

  // The logical not operator can be used
  // to flip a Boolean value from true to false or false to true,
  bool b4{!true};
  bool b5{!false};

  // Boolean values print 1 for true and 0 for false.
  std::cout << true << '\n';
  std::cout << false << '\n';
  std::cout << !b1 << '\n';

  // Print true or false instead of 0 or 1.
  std::cout << std::boolalpha;
  std::cout << b2 << '\n';
  std::cout << b3 << '\n';
  std::cout << b4 << '\n';
  std::cout << b5 << '\n';

  // Integer to boolean conversion works for 0 and 1.
  bool b6{1};
  bool b7{0};

  std::cout << b6 << '\n';
  std::cout << b7 << '\n';

  // Input Boolean values are 0 or 1 by default.
  bool b8{};
  std::cin >> b8;

  // The Boolean manipulator can be used here aswell.
  std::cin >> std::boolalpha;
  bool b9{};
  std::cin >> b9;

  std::cout << b8 << '\n';
  std::cout << b9 << '\n';

  return EXIT_SUCCESS;
}
