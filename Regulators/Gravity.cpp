// The purpose of Gravity.cpp is to hold functions that will provide data to objects which require
// a gravity action to be performed on them.

#include "Gravity.h"

// Constructor for the Gravity Handler
Gravity::Gravity()
{
    //
}

Gravity::Gravity(double setMod)
{
    this->gravityModifier = setMod;
}

Gravity::Gravity(double setMod, double setBase)
{
    this->gravityModifier = setMod;
    this->GRAVITY_CONSTANT = setBase;
}

// Modify an object according to its gravity
void Gravity::actGravity(PhysicsObject* paPhysicsObject)
{
    // Perform operations on Y axis only
    double objVertAcc = paPhysicsObject->getMyAcceleration()[Y_COORD];
    double sto = paPhysicsObject->getMyAcceleration()[X_COORD];

    // Do not do gravity if on ground!
    if (paPhysicsObject->isOnGround()) { return; }

    double gravitizedVerticalAcc = objVertAcc - this->getGravity();

    paPhysicsObject->updateAcceleration(sto, gravitizedVerticalAcc);
}

//Accessors and mutators

void Gravity::setGravityModifier(double input) { this->gravityModifier = input; }
double Gravity::getGravityModifier() { return this->gravityModifier; }
double Gravity::getGravityConstant() { return GRAVITY_CONSTANT; }
double Gravity::getGravity() { return GRAVITY_CONSTANT * this->gravityModifier; }