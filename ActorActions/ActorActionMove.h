#ifndef DNDTESTY_ACTORACTIONMOVE_H
#define DNDTESTY_ACTORACTIONMOVE_H

#include "ActorAction.h"

using namespace std;

    class ActorActionAttack: public ActorAction {
    public:
        ActorActionAttack(BattleState* battleState, Actor* actor);
        virtual ~ActorActionAttack();
    };


#endif //DNDTESTY_ACTORACTIONMOVE_H
