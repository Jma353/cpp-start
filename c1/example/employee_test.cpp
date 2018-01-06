#include <iostream>
#include "employee.hpp"

Records::Employee* make_employee() {
  Records::Employee* emp = new Records::Employee();
  return emp;
}

// int main() {
//   std::cout << "Testing the Employee class" << std::endl;
//   Records::Employee* emp = make_employee();
//   emp->set_first_name("Joseph");
//   emp->set_last_name("Antonakakis");
//   emp->set_employee_number(10000);
//   emp->display();
// }
