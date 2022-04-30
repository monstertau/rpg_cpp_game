//
// Created by Trung Dung Vu on 30/04/2022.
//

#ifndef SAMPLE_SDL_TEXTUREMANAGER_H
#define SAMPLE_SDL_TEXTUREMANAGER_H
#include<SDL2/SDL_image.h>

class TextureManager {
public:
    static SDL_Texture* LoadTexture(const char *filename,SDL_Renderer* ren);
    static void Draw(SDL_Texture* tex,SDL_Renderer* ren,SDL_Rect* src, SDL_Rect *dst);
};


#endif //SAMPLE_SDL_TEXTUREMANAGER_H
