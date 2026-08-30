#include "ProductionWorker.h"

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