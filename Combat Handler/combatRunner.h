//
// Created by willi on 4/8/2019.
//

#ifndef TEAMTUTOR_COMBATRUNNER_H
#define TEAMTUTOR_COMBATRUNNER_H

using namespace std;

//This is a class that needs to be a singleton
//The one object created will ensure that this class handles everything within one class
class combatRunner {

private:
public:
    combatRunner();
    void combat();
    //void calculateDamage(int userFinalAttack, int userFinalDefense, int opponentFinalAttack, int opponentFinalDefense, bool userMW, bool opponentMagical, bool opponentMR);
};


#endif //TEAMTUTOR_COMBATRUNNER_H
