// The purpose of PhysicsObject.cpp is to store the processes a physics object needs in order to perform appropriately.

#include "PhysicsObject.h"

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