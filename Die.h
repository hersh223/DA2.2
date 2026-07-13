#ifndef DIE_H
#define DIE_H

#include <string>

using namespace std;

class Die
{
private:
    int numberOfSides;
    int faceValue;

public:
    Die();

    int getNumberOfSides();
    int getFaceValue();

    void setNumberOfSides(int sides);
    void setFaceValue(int value);

    void roll();

    string toString();
};

#endif