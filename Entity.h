//
// Created by Trung Dung Vu on 21/04/2022.
//

#ifndef SAMPLE_SDL_ENTITY_H
#define SAMPLE_SDL_ENTITY_H


#include <SDL2/SDL_render.h>
#include <SDL2/SDL_image.h>
#include <iostream>
#include "TextureManager.h"

using namespace std;

class Entity {
public:
    int w;
    int h;
    int x;
    int y;
    SDL_Texture *texture;
    SDL_Renderer *renderer;

    Entity(int x, int y, int w, int h, SDL_Texture *texture, SDL_Renderer *renderer) {
        this->x = x;
        this->y = y;
        this->w = w;
        this->h = h;
        this->texture = texture;
        this->renderer = renderer;
    }

    void Move(int xVal, int yVal) {
        this->x += xVal;
        this->y += yVal;
        if (this->x <= 0) {
            this->x = 0;
        }
        if (this->y <= 0) {
            this->y = 0;
        }
    }

    void Render() {
        SDL_Rect dest;
        dest.x = x;
        dest.y = y;
        dest.w = w;
        dest.h = h;
        TextureManager::Draw(texture, renderer, NULL, &dest);
    }
};


#endif //SAMPLE_SDL_ENTITY_H
