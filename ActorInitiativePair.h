//
// Created by Admin on 28.05.2023.
//

#ifndef DNDTESTY_ACTORINITIATIVEPAIR_H
#define DNDTESTY_ACTORINITIATIVEPAIR_H

#include "Actor.h"

using namespace std;

    class ActorInitiativePair {
    public:
        ActorInitiativePair(Actor *actor, int initiative);


        Actor *actor;
        int initiative;

        bool operator < (const ActorInitiativePair& str) const
        {
            if(initiative == str.initiative){
                return (actor->getActorInitiativeBonus() < str.actor->getActorInitiativeBonus());
            }
            return (initiative < str.initiative);
        }

        bool operator > (const ActorInitiativePair& str) const
        {
            if(initiative == str.initiative){
                return (actor->getActorInitiativeBonus() > str.actor->getActorInitiativeBonus());
            }
            return (initiative > str.initiative);
        }


    };

#endif //DNDTESTY_ACTORINITIATIVEPAIR_H
