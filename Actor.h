#ifndef DNDTESTY_ACTOR_H
#define DNDTESTY_ACTOR_H

#include <string>

using namespace std;

class Actor {
public:

    Actor(string name, char token);

    virtual ~Actor();

    string name;
    char token;

    int getActorHP();
    int getActorAC();
    int getActorInitiativeBonus();
    int getActorMlDmg();

    void reciveDmg(int dmg);

private:

    int totalHP = 0;
    int lostHP = 0;

    int initiativeBonus = 0;
};

#endif //DNDTESTY_ACTOR_H
