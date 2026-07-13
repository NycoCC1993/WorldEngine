#ifndef GRAVITY_H
#define GRAVITY_H

#include ".\PhysicsObject.h"

class Gravity
{
    public:
        const double GRAVITY_CONSTANT = 9.8; // Constant acceleration due to gravity
        void setGravityModifier (double input);
        double getGravityModifier();
        void actGravity(PhysicsObject* paPhysicsObject); // move the entity down due to gravity

    private:
        double gravityModifier = 1.0; // Some environments will do better with a less-realistic gravity
};

#endif // GRAVITY_H