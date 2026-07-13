#include "Die.h"
#include <cstdlib>

Die::Die()
{
    numberOfSides = 6;
    faceValue = 1;
}

int Die::getNumberOfSides()
{
    return numberOfSides;
}

int Die::getFaceValue()
{
    return faceValue;
}

void Die::setNumberOfSides(int sides)
{
    numberOfSides = sides;
}

void Die::setFaceValue(int value)
{
    faceValue = value;
}

void Die::roll()
{
    faceValue = rand() % numberOfSides + 1;
}

string Die::toString()
{
    string result = "Die has ";
    result += to_string(numberOfSides);
    result += " sides and rolled a ";
    result += to_string(faceValue);

    return result;
}