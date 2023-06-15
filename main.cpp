#include <iostream>
#include "BattleSimulation.h"
#include "BattleState.h"
#include "Actor.h"
#include "ActorActions/ActorAction.h"
#include "ActorActions/ActorActionAttack.h"
#include "ActorInitiativePair.h"

using namespace std;

int main() {
    BattleSimulation *battleSimulation = new BattleSimulation();

    BattleState *battleState = new BattleState();

    Actor *actorMob = new Actor("Lukas", 'L');
    Actor *actorHero = new Actor("Orc", 'O');

    battleState->AddActor(actorHero);
    battleState->AddActor(actorMob);

    battleSimulation->ApplyBattleState(battleState);

    battleSimulation->SetInitiativeOrder();

    battleSimulation->SetMapOnTable();

    for (int i = 0; i < 10; ++i) {
        cout << battleSimulation->GetCurrentlyActingActor()->name << endl;
    }

    cout << "..." << endl;

    battleSimulation->InitializeActorsCoordinates(actorMob, 0, 0);
    battleSimulation->InitializeActorsCoordinates(actorHero, 11, 11);

    battleSimulation->SetActorTokenOnMap(actorMob);
    battleSimulation->SetActorTokenOnMap(actorHero);

    battleSimulation->DisplayMap(battleState);

    return 0;
}
