#include "BattleState.h"
#include "BattleSimulation.h"
#include "DiceRoller.h"
#include "ActorInitiativePair.h"
#include <vector>
#include <algorithm>

using namespace std;

BattleState::BattleState(){
}
BattleState::~BattleState(){

}

void BattleState::AddActor(Actor *actor){
    actors.push_back(actor);
    actorsPerInitiative.push_back(ActorInitiativePair(actor, 0));
    actorsPerCoordinates.push_back(ActorCoordinatesPair(actor, 0, 0));
}

vector<Actor*> BattleState::GetActors() {
    return actors;
}

Actor* BattleState::GetCurrentlyActingActor(){
    return actorsPerInitiative[currentActorID].actor;
}

void BattleState::CreateMap(Actor*** Map){
    Map = new Actor**[rows];
    for (int i = 0; i < rows; ++i) {
        Map[i] = new Actor*[cols];
    }

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            Map[i][j] = NULL;
        }
    }
}

void BattleState::RollForInitiatives(){
    int noOfActors = actors.size();
    for(int i=0; i<noOfActors; i++){
        actorsPerInitiative[i].initiative=DiceRoller::Roll20(1) + actorsPerInitiative[i].actor->getActorInitiativeBonus();
    }
    sort(actorsPerInitiative.begin(),actorsPerInitiative.end(), greater<ActorInitiativePair>());

    currentActorID = 0;
}

void BattleState::SetActorCoordinates(Actor *actor, int X, int Y) {
    int noOfActors = actors.size();
    for (int i = 0; i < noOfActors; i++) {
        if (actorsPerCoordinates[i].actor == actor) {
            actorsPerCoordinates[i].coordinateX = X;
            actorsPerCoordinates[i].coordinateY = Y;
        }
    }
}

int BattleState::GetActorCoordinateX(Actor *actor){
    int noOfActors = actors.size();
    for(int i=0; i<noOfActors; i++){
        if (actorsPerCoordinates[i].actor==actor) {
            return actorsPerCoordinates[i].coordinateX;
        }
    }
    return 12;
}
int BattleState::GetActorCoordinateY(Actor *actor){
    int noOfActors = actors.size();
    for(int i=0; i<noOfActors; i++){
        if (actorsPerCoordinates[i].actor==actor) {
            return actorsPerCoordinates[i].coordinateY;
        }
    }
    return 12;
}

void BattleState::ApplyActorOnMap(Actor *actor){
    Map[GetActorCoordinateX(actor)][GetActorCoordinateY(actor)]=actor;
}