#include <iostream>
#include <string>

// Use const rather than #define postprocessor to
// declare constants
const float kVersionNumber = 2.0f;
const std::string kProductName = "Super Hyper Net Modulator";

// Also used to protect variables thrown into functions
void mystery_function(const char* my_string) {
  // my_string[0] = 'b'; // Will not compile.
}

// Get the best of both worlds - reference convenience (no copy
// and nice syntax) as well as protection against change
void mystery_function_with_ref(const char& my_char) {
  std::cout<< my_char << std::endl;
  // my_char = '1'; // Will not compile.
}

int main() {
  char word = 'H';
   mystery_function_with_ref(word);
}
