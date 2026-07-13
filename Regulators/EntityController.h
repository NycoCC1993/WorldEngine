#ifndef ENTITYCONTROLLER_H
#define ENTITYCONTROLLER_H

#include ".\PhysicsObject.h"
#include ".\Gravity.h"

class EntityController
{
    public:
        std::vector<PhysicsObject*> priorityObjects; // objects that need to be executed first
        std::vector<PhysicsObject*> objects;
        bool runPhysics();
    private:
        Gravity universalGravity;
        std::vector<double> calculateNewPosition(std::vector<double> oldPos);
        std::vector<double> calculateNewVelocityVector(std::vector<double> oldVel);
        std::vector<double> calculateNewAcceleration(std::vector<double> oldAcc);
};

#endif //ENTITYCONTROLLER_H