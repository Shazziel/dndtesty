#ifndef DNDTESTY_BATTLESTATE_H
#define DNDTESTY_BATTLESTATE_H
#include <vector>
#include <map>
#include "Actor.h"
#include "ActorInitiativePair.h"
#include "ActorCoordinatesPair.h"

#define rows 12
#define cols 12


using namespace std;

class BattleState {
public:
    BattleState();
    virtual ~BattleState();

    void AddActor(Actor *actor);

    Actor* GetCurrentlyActingActor();
    int GetActorCoordinateX(Actor *actor);
    int GetActorCoordinateY(Actor *actor);

    vector<Actor*> GetActors();

    void CreateMap(Actor ***Map);
    void RollForInitiatives();
    void SetActorCoordinates(Actor *actor, int X, int Y);
    void ApplyActorOnMap(Actor *actor);

    Actor*** Map;

private:
    vector<ActorInitiativePair>actorsPerInitiative;
    vector<ActorCoordinatesPair>actorsPerCoordinates;

    vector<Actor*>actors;


    void ApplyBattleState(BattleState *battleState);

    int currentActorID;
};


#endif //DNDTESTY_BATTLESTATE_H
