#pragma once
#include "Employee.h"

class ShiftSupervisor : public Employee {
    private:
        double annualSalary;
        double annualProductionBonus;
    public:
        ShiftSupervisor();
        ShiftSupervisor(float salary, float bonus);

        void setAnnualSalary(double);
        void setAnnualProductionBonus(double);
        double getAnnualSalary() const;
        double getAnnualProductionBonus() const;
};