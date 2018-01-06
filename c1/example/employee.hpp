#include <string>

namespace Records {
  const int default_starting_salary = 30000;

  class Employee {
    public:
      /**
       * Constructor
       */
      Employee();

      /**
       * Promote the employee
       * @param in_raise_amount - Amount to raise the salary by
       */
      void promote(int in_raise_amount = 1000);

      /**
       * Demote the employee
       * @param in_demerit_amount - Amount to decrease the salary by
       */
      void demote(int in_demerit_amount = 1000);

      /**
       * Hire the employee
       */
      void hire();

      /**
       * Fire the employee
       */
      void fire();

      /**
       * Display the employees information (primarily for the console)
       */
      void display() const;

      /**
       * Set the employee's first name
       * @param in_first_name - std::string
       */
      void set_first_name(std::string in_first_name);

      /**
       * Get the employee's first name
       * @return std::string (const)
       */
      std::string get_first_name() const;

      /**
       * Set the employee's last name
       * @param in_last_name - std::string
       */
      void set_last_name(std::string in_last_name);

      /**
       * Get the employee's last name
       * @return std::string (const)
       */
      std::string get_last_name() const;

      /**
       * Set employee number
       * @param in_employee_number - int
       */
      void set_employee_number(int in_employee_number);

      /**
       * Get the employee's number
       * @return int
       */
      int get_employee_number() const;

      /**
       * Set the employee's salary
       * @param in_new_salary - int
       */
      void set_salary(int in_new_salary);

      /**
       * Get the employee's salary
       * @return int
       */
      int get_salary() const;

      /**
       * Get whether the employee is hired or not
       * @return - bool
       */
      bool get_is_hired() const;

    protected:
      // All class members
      std::string m_first_name;
      std::string m_last_name;
      int m_employee_number;
      int m_salary;
      bool b_hired;
  };
}
