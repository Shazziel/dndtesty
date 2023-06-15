#ifndef DNDTESTY_BATTLESIMULATION_H
#define DNDTESTY_BATTLESIMULATION_H

#include "ActorActions/ActorAction.h"
#include "BattleState.h"

using namespace std;

class BattleSimulation {
    public:
    BattleSimulation();
    virtual ~BattleSimulation();

    void ApplyBattleState(BattleState *battleState);

    void SetInitiativeOrder();

//    void BeginBattle();

    Actor* GetCurrentlyActingActor();

    void SetMapOnTable();

    void InitializeActorsCoordinates(Actor *actor, int X, int Y);

    void SetActorTokenOnMap(Actor *actor);

    void DisplayMap(BattleState *battleState);

    vector <Actor*> GetActors();

private:
    BattleState *battleState;
};


#endif //DNDTESTY_BATTLESIMULATION_H
