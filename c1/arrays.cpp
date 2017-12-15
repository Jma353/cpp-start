#include <iostream>

int* new_stack_array() {
  int my_array[10];
  for (int i = 0; i < 10; ++i) {
    my_array[i] = i;
  }
  return my_array;
}

int* new_heap_array() {
  int* my_array = new int[10];
  for (int i = 0; i < 10; ++i) {
    my_array[i] = i;
  }
  return my_array;
}

int main() {
  // Print out the information for array declared on the stack
  int* my_stack_array = new_stack_array();
  std::cout << "This will return random junk b/c on the stack" << std::endl;
  for (int i = 0; i < 10; ++i) {
    std::cout << "The number found is: " << my_stack_array[i] << std::endl;
  }

  // Print out the information for the array declared on the heap
  int* my_heap_array = new_heap_array();
  std::cout << "This will return meaningful info b/c on heap" << std::endl;
  for (int i = 0; i < 10; ++i) {
    std::cout << "The number found is: " << my_heap_array[i] << std::endl;
  }

  // Remember to delete the array to free memory
  delete [] my_heap_array;

  // Return b/c we're in main function
  return 0;
}
