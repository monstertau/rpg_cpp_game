//
// Created by Trung Dung Vu on 30/04/2022.
//

#ifndef SAMPLE_SDL_TEXTUREMANAGER_H
#define SAMPLE_SDL_TEXTUREMANAGER_H
#include<SDL2/SDL_image.h>

class TextureManager {
public:
    static SDL_Texture* LoadTexture(const char *filename, SDL_Renderer* ren);
};


#endif //SAMPLE_SDL_TEXTUREMANAGER_H
