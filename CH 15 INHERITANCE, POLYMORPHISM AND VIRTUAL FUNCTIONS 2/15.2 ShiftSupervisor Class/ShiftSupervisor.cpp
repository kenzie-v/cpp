#pragma once
#include "ShiftSupervisor.h"

ShiftSupervisor::ShiftSupervisor() {
    annualSalary = 0.0;
    annualProductionBonus = 0.0;
}

ShiftSupervisor::ShiftSupervisor(float salary, float bonus) {
    annualSalary = salary;
    annualProductionBonus = bonus;
}

void ShiftSupervisor::setAnnualSalary(double salary) {
    annualSalary = salary;
}

void ShiftSupervisor::setAnnualProductionBonus(double bonus) {
    annualProductionBonus = bonus;
}

double ShiftSupervisor::getAnnualSalary() const {
    return annualSalary;
}

double ShiftSupervisor::getAnnualProductionBonus() const {
    return annualProductionBonus;
}