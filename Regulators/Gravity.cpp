// The purpose of Gravity.cpp is to hold functions that will provide data to objects which require
// a gravity action to be performed on them.

#include "Gravity.h"

// Constructor for the Gravity Handler
Gravity::Gravity()
{
    //
}

void Gravity::actGravity(PhysicsObject* paPhysicsObject)
{
    if (paPhysicsObject->getIs3dObject())
    {
        // Perform operations on Z axis for 3D objects
    } else
    {
        // Perform operations on Y axis for 2D objects
    }
}

//Accessors and mutators

void Gravity::setGravityModifier(double input) { gravityModifier = input; }
double Gravity::getGravityModifier() { return gravityModifier; }