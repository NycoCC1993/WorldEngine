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
        
        bool getIs3dObject();

    private:
        // Position:
        double xPos;
        double yPos;
        double zPos;

        // Velocity:
        double xVel;
        double yVel;
        double zVel;

        // Acceleration:
        double xAcc;
        double yAcc;
        double zAcc;

        // Type
        bool is3dObject;
};

#endif // PHYSICSOBJECT_H