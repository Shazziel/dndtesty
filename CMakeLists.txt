cmake_minimum_required(VERSION 3.23)
project(dndtesty)

set(CMAKE_CXX_STANDARD 14)

add_executable(dndtesty main.cpp Actor.cpp Actor.h BattleSimulation.cpp BattleSimulation.h ActorActions/ActorAction.cpp ActorActions/ActorAction.h BattleState.cpp BattleState.h ActorActions/ActorActionAttack.cpp ActorActions/ActorActionAttack.h DiceRoller.cpp DiceRoller.h ActorInitiativePair.cpp ActorInitiativePair.h ActorActions/ActorActionMove.cpp ActorActions/ActorActionMove.h ActorCoordinatesPair.cpp ActorCoordinatesPair.h)
