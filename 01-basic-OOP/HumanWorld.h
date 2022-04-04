//
// Created by Trung Dung Vu on 03/04/2022.
//

#ifndef GAME_LESSON_1_HUMANWORLD_H
#define GAME_LESSON_1_HUMANWORLD_H

#include "World.h"

class HumanWorld : public World {
public:
    float buffHumanCharacter(); // tra ve he so buff cho atk cua human
    float buffElfCharacter(); // tra ve he so buff cho atk cua elf
    float buffUndeadCharacter(); // tra ve he so buff cho atk cua undead

};


#endif //GAME_LESSON_1_HUMANWORLD_H
