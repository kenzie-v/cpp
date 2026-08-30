#pragma once
#include <string>

class Employee {
private:
    std::string name;
    std::string employeeNumber;
    std::string hireDate;
public:
    Employee();
    Employee(std::string name, std::string employeeNumber, std::string hireDate);
    void setName(const std::string& name);
    void setEmployeeNumber(const std::string& employeeNumber);
    void setHireDate(const std::string& hireDate);
    std::string getName() const;
    std::string getEmployeeNumber() const;  
    std::string getHireDate() const;
};