#ifndef GRAVITY_H
#define GRAVITY_H

class Gravity
{
    public:
        const double GRAVITY_CONSTANT = 9.8; // Constant acceleration due to gravity
        void setGravityModifier (double input);
        double getGravityModifier();
        double actGravity(double yPos); // move the character down due to gravity

    private:
        double gravityModifier = 1.0; // Some environments will do better with a less-realistic gravity
};

#endif // GRAVITY_H