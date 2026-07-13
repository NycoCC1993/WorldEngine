// The purpose of Gravity.cpp is to hold functions that will provide data to objects which require
// a gravity action to be performed on them.

#include "Gravity.h"

// Constructor for the Gravity Handler
Gravity::Gravity()
{
    //
}


//Accessors and mutators

void Gravity::setGravityModifier(double input) { gravityModifier = input; }
double Gravity::getGravityModifier() { return gravityModifier; }