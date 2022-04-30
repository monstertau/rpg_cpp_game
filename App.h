//
// Created by Trung Dung Vu on 21/04/2022.
//
#include<SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include<iostream>
#include "Entity.h"

using namespace std;

#ifndef SAMPLE_SDL_APP_H
#define SAMPLE_SDL_APP_H


class App {
private:
    char *characterFileName = "download.png";
    const int FPS = 60;
    const int frameDelay = 1000 / FPS;

    Entity *entity = NULL;
    bool Running = true;
    SDL_Window *window = NULL;
    SDL_Renderer *renderer = NULL;
    const int HEIGHT = 768;
    const int WIDTH = 1024;
    int R = 0xff;
    int G = 0xff;
    int B = 0xff;
    int A = 0xff;

    bool Init();

    void RenderPlayer();

    void OnEvent(SDL_Event *event);

    void Render();

public:
    void Run();
};


#endif //SAMPLE_SDL_APP_H
