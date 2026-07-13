#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Die.h"
#include "DiceHand.h"

using namespace std;

int main()
{
    srand(time(0));

    Die die1;
    Die die2;
    Die die3;

    die1.setNumberOfSides(6);
    die1.setFaceValue(3);

    die2.setNumberOfSides(6);
    die2.setFaceValue(5);

    die3.setNumberOfSides(6);
    die3.setFaceValue(2);

    cout << "Before Rolling:" << endl;

    cout << die1.toString() << endl;
    cout << die2.toString() << endl;
    cout << die3.toString() << endl;

    die1.roll();
    die2.roll();
    die3.roll();

    cout << "\nAfter Rolling:" << endl;

    cout << die1.toString() << endl;
    cout << die2.toString() << endl;
    cout << die3.toString() << endl;

    DiceHand hand;

    cout << "\nStarting Dice Hand:" << endl;
    cout << hand.displayDieHand() << endl;

    hand.rollAllDice();

    cout << "\nAfter Rolling All Dice:" << endl;
    cout << hand.displayDieHand() << endl;

    hand.rollDie(0);
    hand.rollDie(4);

    cout << "\nAfter Rolling First and Last Die:" << endl;
    cout << hand.displayDieHand() << endl;

    return 0;
}