#ifndef ENTITYCONTROLLER_H
#define ENTITYCONTROLLER_H

#include ".\PhysicsObject.h"
#include ".\Gravity.h"

class EntityController
{
    public:
        std::vector<PhysicsObject*> priorityObjects; // objects that need to be executed first
        std::vector<PhysicsObject*> objects;
    private:
};

#endif //ENTITYCONTROLLER_H