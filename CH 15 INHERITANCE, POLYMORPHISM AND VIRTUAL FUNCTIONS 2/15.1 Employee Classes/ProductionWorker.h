#pragma once
#include "Employee.h"

class ProductionWorker : public Employee {
private:
        int shift;
        double hourlyPayRate;
public:
    ProductionWorker();
    void setShift(int shift);
    int getShift() const;
    void setHourlyPayRate(double hourlyPayRate);
    double getHourlyPayRate() const;
    
};