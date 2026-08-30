#pragma once
#include "ProductionWorker.h"

class TeamLeader : public ProductionWorker {
private:
    double monthlyBonus;
    double requiredTrainingHours;
    double attendedTrainingHours;
public:
    TeamLeader();
    TeamLeader(double bonus, double requiredHours, double attendedHours);
    
    void setMonthlyBonus(double bonus);
    void setRequiredTrainingHours(double hours);
    void setAttendedTrainingHours(double hours);
    double getMonthlyBonus() const;
    double getRequiredTrainingHours() const;
    double getAttendedTrainingHours() const;
};