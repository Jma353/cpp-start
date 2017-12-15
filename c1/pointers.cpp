#include <iostream>

void print_pointers() {
  int i = 10032;
  std::cout << "The memory address of the variable is " << &i << std::endl;
  std::cout << "The actual variable value is " << i << std::endl;
}

// TODO - more pointer explorations

int main() {
  print_pointers();
}
