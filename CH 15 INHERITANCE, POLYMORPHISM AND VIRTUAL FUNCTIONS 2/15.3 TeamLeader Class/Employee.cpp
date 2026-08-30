#pragma once
#include "Employee.h"
#include <string>

Employee::Employee(){
    name = "";
    employeeNumber = "";
    hireDate = "";
}
Employee::Employee(std::string nm, std::string empNum, std::string hrDate){
    name = nm;
    employeeNumber = empNum;
    hireDate = hrDate;
}

void Employee::setName(const std::string& nm){ name = nm; }
void Employee::setEmployeeNumber(const std::string& empNum){
    employeeNumber = empNum;
}
void Employee::setHireDate(const std::string& hrDate){ hireDate = hrDate; }

std::string Employee::getName() const { return name; }
std::string Employee::getEmployeeNumber() const { return employeeNumber; }
std::string Employee::getHireDate() const { return hireDate; }

std::ostream& operator<<(std::ostream& os, const Employee& employee){
    os << "Name: " << employee.name << "\n";
    os << "Employee Number: " << employee.employeeNumber << "\n";
    os << "Hire Date: " << employee.hireDate << "\n";
    return os;
}