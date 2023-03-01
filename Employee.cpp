//#include <string>
#include <iostream>
#include "Employee.h"


int main() {

    Employee employee1 {"John"};
    Employee employee2 {"John"};

    std::string setFirstName;
    std::cout << " Enter Employee first name: ";
    std::cin >> employee1.setFirstName();

    std::string setLastName;
    std::cout << " Enter Employee last name: ";
    std::cin >> employee1.setLastName();    

    int setMonthlySalary;
    std::cout << " Enter Employee monthly salary: ";
    std::cin >> employee1.setMonthlySalary();

    std::cout << employee1.getFirstName();
    std::cout << employee1.getLastName();
    std::cout << employee1.getMonthlySalary();
    
    int raiseSalary;
    std::cout << " Employee raise: ";
    std::cin >> employee1.raiseSalary;

    return 0;
}