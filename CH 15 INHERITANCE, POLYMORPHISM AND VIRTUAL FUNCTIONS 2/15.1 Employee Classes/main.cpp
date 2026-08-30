#include "Employee.h"
#include <iostream>

int main(){
    Employee emp("John Doe", "12345", "2020-01-01");
    
    std::cout << "Name: " << emp.getName() << std::endl;
    std::cout << "Employee Number: " << emp.getEmployeeNumber() << std::endl;
    std::cout << "Hire Date: " << emp.getHireDate() << std::endl;

    return 0;
}