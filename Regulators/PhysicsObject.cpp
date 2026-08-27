// The purpose of PhysicsObject.cpp is to store the processes a physics object needs in order to perform appropriately.

#include "PhysicsObject.h"

//Constructors
PhysicsObject::PhysicsObject(double x, double y, double mass)
{
    // Set my location
    this->xPos = x;
    this->yPos = y;

    // Set my static values
    this->mass = mass;
}

//Accessors and mutators
std::vector<double> PhysicsObject::getMyLocation()
{
    std::vector<double> toRet = {this->xPos, this->yPos};
    return toRet;
}

std::vector<double> PhysicsObject::getMyVelocity()
{
    std::vector<double> toRet = {this->xVel, this->yVel};
    return toRet;
}

std::vector<double> PhysicsObject::getMyAcceleration()
{
    std::vector<double> toRet = {this->xAcc, this->yAcc};
    return toRet;
}

double PhysicsObject::getMass()
{
    return this->mass;
}

// TODO: Location, velocity, acceleration are handled by entity controller; move these there
void PhysicsObject::updateLocation(double newX, double newY)
{
    // check that the commanded location is accepted by collision - not overlapping with collision object!
    // TODO: Collision handling function: takes in pass-by-reference values, and corrects them if they collide with something?
    // -> might need to be done in the entity controller instead? should also correct vel & acc for smacking into a wall

    this->xPos = newX;
    this->yPos = newY;
}

void PhysicsObject::updateVelocity(double newX, double newY)
{
    this->xVel = newX;
    this->yVel = newY;
}

void PhysicsObject::updateAcceleration(double newX, double newY)
{
    this->xAcc = newX;
    this->yAcc = newY;
}

void PhysicsObject::updateMass(double newM)
{
    this->mass = newM;
}

// External helper functions
bool PhysicsObject::isOnGround()
{
    // TODO: When actual logic exists, implement it
    return true;
}