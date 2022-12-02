#include "AllMyDucks.hpp"
#include <iostream>

using namespace std;
using namespace DuckSim;

void simulateDuck(Duck &duck) {
    cout << "-------------------" << endl;
    duck.performQuack();
    duck.swim();
    duck.performFly();
    duck.display();
}

int main() {
    Duck *ducks[] = {new MarbledDuck, new WhitePekinDuck, new RubberDuck, new DecoyDuck};
    for (auto duck: ducks)
        simulateDuck(*duck);

    ducks[2]->setFlyBehavior(new FlyWithWings);
    simulateDuck(*ducks[2]);
    ducks[3]->setQuackBehavior(new Squeak);
    simulateDuck(*ducks[3]);

    for (auto duck: ducks)
        delete duck;

    RubberDuck rd(new FlyWithWings, new Squeak);
    simulateDuck(rd);

    DecoyDuck dd(new FlyNoWay, new Squeak);
    simulateDuck(dd);
}
/*
-------------------
quack!
Look, I am swimming
I can fly
Displaying a Marbled duck on the screen
-------------------
quack, quack!
Look, I am swimming
I can fly
Displaying a White Pekin duck on the screen
-------------------
squeak
Look, I am swimming
Displaying a rubber duck on the screen
-------------------
Look, I am swimming
Displaying a decoy duck on the screen
-------------------
squeak
Look, I am swimming
I can fly
Displaying a rubber duck on the screen
-------------------
squeak
Look, I am swimming
Displaying a decoy duck on the screen
-------------------
squeak
Look, I am swimming
I can fly
Displaying a rubber duck on the screen
-------------------
squeak
Look, I am swimming
Displaying a decoy duck on the screen
*/
