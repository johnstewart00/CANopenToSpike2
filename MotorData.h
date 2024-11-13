#ifndef MOTORDATA_H
#define MOTORDATA_H

class MotorData {
private:
    int position;
    int velocity;
    int status;

public:
    // Constructors
    MotorData();
    MotorData(int pos, int vel, int stat);

    // Getters
    int getPosition() const;
    int getVelocity() const;
    int getStatus() const;

    // Setters
    void setPosition(int pos);
    void setVelocity(int vel);
    void setStatus(int stat);
};

#endif // MOTORDATA_H
