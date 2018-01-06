#include <iostream>

void passed_by_reference(int& i) {
  // Passing by reference allows one to use the variable as if it
  // was a normal VALUE but in reality the pointed-to memory is being
  // mutated; thus, any changes to i will change the original variable
  // passed into the function
  i++;
}

void not_passed_by_reference(int i) {
  // i is a copy of the original value, so no changes are reflected
  // to the integer originally passed into this function
  i++;
}

int main() {
  int j = 0;

  not_passed_by_reference(j);
  std::cout << "Should still be 0: " << j << std::endl;

  passed_by_reference(j);
  std::cout << "Should be 1 now: " << j << std::endl;
}
