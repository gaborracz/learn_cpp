#include <iostream>

// this function gets an integer input
// from the user
int getValueFromUser() {
  std::cout << "Enter a number: ";
  int input{};
  std::cin >> input;

  // retutn the value back to the caller
  return input;
}

int main() {
  // initialize num with return value of the function
  int num{getValueFromUser()};

  std::cout << num << " doubled is: " << num * 2 << '\n';

  return 0;
}
