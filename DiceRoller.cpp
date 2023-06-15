//
// Created by Admin on 28.05.2023.
//
#include<iostream>
#include<cstdlib>

#include "DiceRoller.h"

using namespace std;

int DiceRoller::Roll20(int numberOfDice) {
    int result=0;
    for(int i=0; i<numberOfDice; i++){
        result+=((rand() % 20)+1);
    }
    return result;
}