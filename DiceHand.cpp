#include "DiceHand.h"

DiceHand::DiceHand()
{
    size = 5;
    dice = new Die[size];
}

DiceHand::~DiceHand()
{
    delete[] dice;
}

Die* DiceHand::getDice()
{
    return dice;
}

int DiceHand::getSize()
{
    return size;
}

void DiceHand::setDice(Die* newDice)
{
    dice = newDice;
}

void DiceHand::setSize(int newSize)
{
    size = newSize;
}

string DiceHand::displayDieHand()
{
    string result = "Dice Hand: ";

    for(int i = 0; i < size; i++)
    {
        result += to_string(dice[i].getFaceValue());

        if(i < size - 1)
        {
            result += ", ";
        }
    }

    return result;
}

void DiceHand::rollDie(int dieNum)
{
    if(dieNum >= 0 && dieNum < size)
    {
        dice[dieNum].roll();
    }
}

void DiceHand::rollAllDice()
{
    for(int i = 0; i < size; i++)
    {
        dice[i].roll();
    }
}