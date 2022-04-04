//
// Created by Trung Dung Vu on 03/04/2022.
//

#ifndef GAME_LESSON_1_GAME_H
#define GAME_LESSON_1_GAME_H
#include "Character.h"
#include "Human.h"
#include "Elf.h"
#include "World.h"

class Game {
private:
    Character *player1;
    Character *player2;
    int turn;
    World *world;
    void Init(); // khoi tao nguoi choi va the gioi
    void Exit(); // sau khi thoat game lam gi
    void ChangeWorld(World *w);

public:
    void Run(); // choi game
};


#endif //GAME_LESSON_1_GAME_H
