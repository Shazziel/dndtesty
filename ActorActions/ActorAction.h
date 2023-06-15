
#ifndef DNDTESTY_ACTORACTION_H
#define DNDTESTY_ACTORACTION_H

#include "../BattleState.h"
#include "../Actor.h"

using namespace std;

class ActorAction {
public:
    ActorAction(BattleState *battleState, Actor *actor);
    virtual ~ActorAction();
};


#endif //DNDTESTY_ACTORACTION_H
