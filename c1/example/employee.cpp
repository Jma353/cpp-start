#include <iostream>
#include "employee.hpp"

namespace Records {
  Employee::Employee() :
    m_first_name(""),
    m_last_name(""),
    m_employee_number(-1),
    m_salary(default_starting_salary),
    b_hired(false) {}

  void Employee::promote(int in_raise_amount) {
    set_salary(get_salary() + in_raise_amount);
  }

  void Employee::demote(int in_demerit_amount) {
    set_salary(get_salary() + in_demerit_amount);
  }

  void Employee::hire() {
    b_hired = true;
  }

  void Employee::fire() {
    b_hired = false;
  }

  void Employee::display() const {
    std::cout << "Employee: " << get_last_name() << ", " << get_first_name() << std::endl;
    std::cout << "-------------------------" << std::endl;
    std::cout << (b_hired ? "Current Employee" : "Former Employee") << std::endl;
    std::cout << "Employee Number: " << get_employee_number() << std::endl;
    std::cout << "Salary: $" << get_salary() << std::endl;
    std::cout << std::endl; // empty line
  }

  void Employee::set_first_name(std::string in_first_name) {
    m_first_name = in_first_name;
  }

  std::string Employee::get_first_name() const {
    return m_first_name;
  }

  void Employee::set_last_name(std::string in_last_name) {
    m_last_name = in_last_name;
  }

  std::string Employee::get_last_name() const {
    return m_last_name;
  }

  void Employee::set_employee_number(int in_employee_number) {
    m_employee_number = in_employee_number;
  }

  int Employee::get_employee_number() const {
    return m_employee_number;
  }

  void Employee::set_salary(int in_new_salary) {
    m_salary = in_new_salary;
  }

  int Employee::get_salary() const {
    return m_salary;
  }
}
