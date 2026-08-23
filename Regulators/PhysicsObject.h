#ifndef PHYSICSOBJECT_H
#define PHYSICSOBJECT_H

#include <vector>

class PhysicsObject
{
    public:
        std::vector<double> getMyLocation();
        std::vector<double> getMyVelocity();
        std::vector<double> getMyAcceleration();
        void updateLocation(std::vector<double>);
        void updateVelocity(std::vector<double>);
        void updateAcceleration(std::vector<double>);

    private:
        // Position:
        double xPos;
        double yPos;

        // Velocity:
        double xVel;
        double yVel;

        // Acceleration:
        double xAcc;
        double yAcc;

        // Mass:
        double mass;
};

#endif // PHYSICSOBJECT_H