// The purpose of the Entity Controller is to handle all of the physics objects and make sure their needs are met

#include "EntityController.h"

// Execute the needed physics functions for each object in the list. Expect to run once per frame maybe
bool EntityController::runPhysics()
{
    for (PhysicsObject* each : this->priorityObjects)
    {
        // perform any 2D-specific calculations

        // generic physics calculations
    }
}