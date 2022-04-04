//
// Created by Trung Dung Vu on 03/04/2022.
//

#ifndef GAME_LESSON_1_CHARACTER_H
#define GAME_LESSON_1_CHARACTER_H


class Character {
private:
    int HP;
    int MP;
    int ATK;

public:

    Character(int HP, int MP, int ATK);

    void AddHP(int HP);

    void AddMP(int MP);

    int GetATK() const;

    int GetMP() const;

    int GetHP() const;


    void DecreaseHP(int HP);

    void DecreaseMP(int MP);
};


#endif //GAME_LESSON_1_CHARACTER_H
