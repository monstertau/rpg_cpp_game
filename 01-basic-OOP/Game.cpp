//
// Created by Trung Dung Vu on 03/04/2022.
//

#include "Game.h"
#include <iostream>

using namespace std;

void Game::Init() {
    // init character, world and metadata
    this->player1 = new Human();
    this->player2 = new Elf();
    this->world = new World();
}


void Game::Exit() {
    delete player2;
    delete player1;
    delete world;
    // exit the game
}

void Game::ChangeWorld(World *w) {
    // change the world
    this->world = w;
}

void Game::Run() {
    this->Init();
    /*
     * run game
     * Kiem tra den turn nguoi nao, thi cho nguoi do chon
     * 1. Add HP
     * 2. Add MP
     * 3. Attack
     * 4. Change World
     * 5. Do nothing
     * */

    /*Khi user chon 3, truoc khi attack,
     * se goi den world.BuffCharacter() de thay doi suc tan cong cua 2 player */
    while (1) {
        cout << "Player 1 HP:" << player1->GetHP() << endl;
        cout << "Player 1 MP:" << player1->GetMP() << endl;
        cout << "Player 2 HP:" << player2->GetHP() << endl;
        cout << "Player 2 HP:" << player2->GetMP() << endl;
        if (this->turn == 0) {
            cout << "Player 1 turn!" << endl;
        } else {
            cout << "Player 2 turn!" << endl;
        }
        int choice;
        cout << "Enter choice[1-5]:";
        cin >> choice;
        switch (choice) {
            case 1:
                if (this->turn == 0) {
                    player1->AddHP(10);
                } else {
                    player2->AddHP(10);
                }
                break;
            case 2:
                if (this->turn == 0) {
                    player1->AddMP(10);
                } else {
                    player2->AddMP(10);
                }
                break;
            default:
                break;
            // TODO: implement the attack and switch world function
        }
        if (player1->GetHP() == 0 || player2->GetHP() == 0) {
            break;
        }
        this->turn == 0 ? this->turn = 1 : this->turn = 0;
    }

    cout << "Game End!" << endl;

    this->Exit();
}
