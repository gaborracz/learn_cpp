#include <cstdlib>
#include <iostream>

int main() {
  /*
   * The character type can hold a single ASCII character.
   * ASCII table holds code point to character mappings.
   * Characters can be initialized by code point or by value.
   */
  char ch1{'a'};
  char ch2{97};

  /* Numbers should not be mixed. */
  char ch3{'5'}; // this is stored as integer 53
  char ch4{5};   // this is stored as integer 5, this will not print
                 // ASCII table codes 0-31 and 127 are called unprintable

  std::cout << ch1 << '\n' << ch2 << '\n' << ch3 << '\n' << ch4 << '\n';

  /* Inputing chars. */
  std::cout << "Enter a single character: ";
  char ch5{};
  std::cin >> ch5;
  std::cout << "You entered: " << ch5 << '\n';

  /* Standard input is buffered, so multiple characters can be entered. */
  std::cin >> ch5;
  std::cout << "You entered: " << ch5 << '\n';
  std::cin >> ch5;
  std::cout << "You entered: " << ch5 << '\n';

  /*
   * The std::cin does not extract whitespaces.
   * White space characters can be entered with std::cin.get()
   */
  char ch6{};
  std::cin.get(ch6);

  /*
   * Best practice: single characters should be single qouted,
   * string should be double quoted.
   */
  std::cout << "This is " << 'a' << "sentence with an example." << '\n';

  return EXIT_SUCCESS;
}
