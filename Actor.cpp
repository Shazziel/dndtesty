#include "Actor.h"

using namespace std;

Actor::Actor(string name, char token) {
    this->name=name;
    this->token=token;
}
     Actor::~Actor(){}

    int Actor::getActorHP() {
        return (totalHP - lostHP);
    }

    int Actor::getActorAC(){
        return 12;
    }

    int Actor::getActorInitiativeBonus(){
        return initiativeBonus;
    }

    int Actor::getActorMlDmg(){
        return 3;
    }

    void Actor::reciveDmg(int dmg){
        this->lostHP=(this->lostHP)+dmg;
    }

