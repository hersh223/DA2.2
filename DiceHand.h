#ifndef DICEHAND_H
#define DICEHAND_H

#include "Die.h"
#include <string>

using namespace std;

class DiceHand
{
private:
    Die* dice;
    int size;

public:
    DiceHand();
    DiceHand(int newSize);
    ~DiceHand();

    Die* getDice();
    int getSize();

    void setDice(Die* newDice);
    void setSize(int newSize);

    string displayDieHand();

    void rollDie(int dieNum);
    void rollAllDice();
};

#endif