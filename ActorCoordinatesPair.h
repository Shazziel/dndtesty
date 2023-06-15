//
// Created by Admin on 14.06.2023.
//

#ifndef DNDTESTY_ACTORCOORDINATESPAIR_H
#define DNDTESTY_ACTORCOORDINATESPAIR_H

#include "Actor.h"

using namespace std;

class ActorCoordinatesPair {
public:
    ActorCoordinatesPair(Actor *actor, int coordinateX, int coordinateY);

    Actor *actor;
    int coordinateX;
    int coordinateY;
};


#endif //DNDTESTY_ACTORCOORDINATESPAIR_H
