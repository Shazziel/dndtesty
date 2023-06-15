#ifndef DNDTESTY_ACTORACTIONATTACK_H
#define DNDTESTY_ACTORACTIONATTACK_H

#include "ActorAction.h"

using namespace std;

    class ActorActionAttack: public ActorAction {
    public:
        ActorActionAttack(BattleState* battleState, Actor* actor);
        virtual ~ActorActionAttack();
    };


#endif //DNDTESTY_ACTORACTIONATTACK_H
