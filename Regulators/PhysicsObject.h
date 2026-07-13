#ifndef PHYSICSOBJECT_H
#define PHYSICSOBJECT_H

#include <vector>

class PhysicsObject
{
    public:
        std::vector<double> getMyLocation();
        bool getIs3dObject();

    private:
        // Position:
        double xPos;
        double yPos;
        double zPos;

        // Type
        bool is3dObject;

};

#endif // PHYSICSOBJECT_H