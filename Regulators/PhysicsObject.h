#ifndef PHYSICSOBJECT_H
#define PHYSICSOBJECT_H

#include <vector>
#include ".\Utils.h"

class PhysicsObject
{
    public:
        PhysicsObject(double, double, double);

        std::vector<double> getMyLocation();
        std::vector<double> getMyVelocity();
        std::vector<double> getMyAcceleration();
        double getMass();
        
        void updateLocation(double, double);
        void updateVelocity(double, double);
        void updateAcceleration(double, double);
        void updateMass(double);

        bool isOnGround();

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