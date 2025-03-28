#include <iostream>

// This is called a forward declaration.
// The add() function's body is implemented in a different file.
// Compilers must know the signature of the function before its being used.
int add(int x, int y);

int main() {
  int a{1};
  int b{4};

  std::cout << a << " + " << b << " is " << add(a, b) << '\n';
}
