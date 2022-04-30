//
// Created by Trung Dung Vu on 30/04/2022.
//

#ifndef SAMPLE_SDL_MAP_H
#define SAMPLE_SDL_MAP_H

#include <SDL2/SDL_image.h>


class Map {
public:
    Map(SDL_Renderer* ren,int tileSize);

    void LoadMap(const char *path, int sizeX, int sizeY);

    void DrawMap();

private:
    SDL_Renderer* renderer;
    int tileSize;
    SDL_Rect src, dest;
};


#endif //SAMPLE_SDL_MAP_H
