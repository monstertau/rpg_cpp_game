//
// Created by Trung Dung Vu on 03/04/2022.
//

#include "Character.h"

Character::Character(int HP, int MP, int ATK) {
    this->HP = HP;
    this->MP = MP;
    this->ATK = ATK;
}

int Character::GetMP() const {
    return this->MP;
}

int Character::GetHP() const {
    return this->HP;
}

int Character::GetATK() const {
    return this->ATK;
}

void Character::AddMP(int addedMP) {
    this->MP = this->MP + addedMP;
}

void Character::AddHP(int addedHP) {
    this->HP = this->HP + addedHP;
}

void Character::DecreaseHP(int subtractedHP) {
    this->HP = this->HP - subtractedHP;
};

void Character::DecreaseMP(int subtractedMP) {
    this->HP = this->HP - subtractedMP;
};