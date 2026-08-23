// The purpose of Gravity.cpp is to hold functions that will provide data to objects which require
// a gravity action to be performed on them.

#include "Gravity.h"

// Constructor for the Gravity Handler
Gravity::Gravity()
{
    //
}

// Modify an object according to its gravity
void Gravity::actGravity(PhysicsObject* paPhysicsObject)
{
    // Perform operations on Y axis for 2D objects
}

//Accessors and mutators

void Gravity::setGravityModifier(double input) { this->gravityModifier = input; }
double Gravity::getGravityModifier() { return this->gravityModifier; }