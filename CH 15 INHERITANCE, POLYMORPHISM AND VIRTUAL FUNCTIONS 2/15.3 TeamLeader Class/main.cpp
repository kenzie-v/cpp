#include "Employee.h"
#include "ShiftSupervisor.h"
#include <iostream>

int main(){
    //Employee emp("John Doe", "12345", "2020-01-01");
    
    //std::cout << "Name: " << emp.getName() << std::endl;
    //std::cout << "Employee Number: " << emp.getEmployeeNumber() << std::endl;
    //std::cout << "Hire Date: " << emp.getHireDate() << std::endl;

    ShiftSupervisor supervisor(40000.0, 6000.0);

    std::cout << "Annual Salary: " << supervisor.getAnnualSalary() << std::endl;
    std::cout << "Annual Production Bonus: " << supervisor.getAnnualProductionBonus() << std::endl;

    return 0;
}