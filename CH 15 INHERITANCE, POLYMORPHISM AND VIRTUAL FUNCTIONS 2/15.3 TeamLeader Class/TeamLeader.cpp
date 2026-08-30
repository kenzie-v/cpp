#include "TeamLeader.h"

TeamLeader::TeamLeader() {
    monthlyBonus = 0.0;
    requiredTrainingHours = 0.0;
    attendedTrainingHours = 0.0;
}

TeamLeader::TeamLeader(double bonus, double requiredHours, double attendedHours) {
    monthlyBonus = bonus;
    requiredTrainingHours = requiredHours;
    attendedTrainingHours = attendedHours;
}

void TeamLeader::setMonthlyBonus(double bonus) {
    monthlyBonus = bonus;
}

void TeamLeader::setRequiredTrainingHours(double hours) {
    requiredTrainingHours = hours;
}

void TeamLeader::setAttendedTrainingHours(double hours) {
    attendedTrainingHours = hours;
}

double TeamLeader::getMonthlyBonus() const {
    return monthlyBonus;
}

double TeamLeader::getRequiredTrainingHours() const {
    return requiredTrainingHours;
}

double TeamLeader::getAttendedTrainingHours() const {
    return attendedTrainingHours;
}