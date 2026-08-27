#ifndef GRAVITY_H
#define GRAVITY_H

#include ".\PhysicsObject.h"

class Gravity
{
    public:
        Gravity();
        Gravity(double); // set a modifier
        Gravity(double, double); // set a modifier AND constant!
    
        void setGravityModifier (double input);
        double getGravityModifier();
        double getGravityConstant();
        double getGravity();
        void actGravity(PhysicsObject* paPhysicsObject); // move the entity down due to gravity

    private:
        double gravityModifier = 1.0; // Some environments will do better with a less-realistic gravity
        double GRAVITY_CONSTANT = 9.8; // Constant acceleration due to gravity - needs default!
};

#endif // GRAVITY_H