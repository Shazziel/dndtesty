#include <valarray>
#include "iostream"

#include "BattleSimulation.h"

using namespace std;

BattleSimulation::BattleSimulation() {
    srand((unsigned) time(nullptr));
}

BattleSimulation::~BattleSimulation() {

}

void BattleSimulation::ApplyBattleState(BattleState *battleState) {
    this->battleState = battleState;
}

Actor* BattleSimulation::GetCurrentlyActingActor() {
    return this->battleState->GetCurrentlyActingActor();
}

vector <Actor*> BattleSimulation::GetActors() {
    return this->battleState->GetActors();
}

void BattleSimulation::SetInitiativeOrder() {
    this->battleState->RollForInitiatives();

}

void BattleSimulation::SetMapOnTable() {
    this->battleState->CreateMap(this->battleState->Map);
}

void BattleSimulation::InitializeActorsCoordinates(Actor *actor, int X, int Y) {
    this->battleState->SetActorCoordinates(actor, X, Y);
}

void BattleSimulation::SetActorTokenOnMap(Actor *actor){
    this->battleState->ApplyActorOnMap(actor);
}

//void BattleSimulation::BeginBattle() {
//    SetInitiativeOrder();
//}

void BattleSimulation::DisplayMap(BattleState *battleState){
    for(int i; i<rows; i++){
        for(int j; j<cols; j++){
            if(battleState->Map[i][j]==NULL)
                cout<<" ";
            else
                cout<<battleState->Map[i][j]->token;
        }
        cout<<endl;
    }
}

