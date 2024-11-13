#include "MotorData.h"

// Default Constructor
MotorData::MotorData() : position(0), velocity(0), status(0) {}

// Parameterized Constructor
MotorData::MotorData(int pos, int vel, int stat) : position(pos), velocity(vel), status(stat) {}

// Getters
int MotorData::getPosition() const {
    return position;
}

int MotorData::getVelocity() const {
    return velocity;
}

int MotorData::getStatus() const {
    return status;
}

// Setters
void MotorData::setPosition(int pos) {
    position = pos;
}

void MotorData::setVelocity(int vel) {
    velocity = vel;
}

void MotorData::setStatus(int stat) {
    status = stat;
}
