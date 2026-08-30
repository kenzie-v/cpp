#include "ProductionWorker.h"
#include "Employee.h"

ProductionWorker::ProductionWorker(){

}
void ProductionWorker::setShift(int shift){
    this->shift = shift;
}
int ProductionWorker::getShift() const{ return shift; }
void ProductionWorker::setHourlyPayRate(double hourlyPayRate){
    this->hourlyPayRate = hourlyPayRate;
}
double ProductionWorker::getHourlyPayRate() const {
    return hourlyPayRate;
}

std::ostream& operator<<(std::ostream& os, const ProductionWorker& worker){
    os << static_cast<const Employee&>(worker);
    os << "Shift: " << worker.shift << "\n";
    os << "Hourly Pay Rate: " << worker.hourlyPayRate << "\n";
    return os;
}