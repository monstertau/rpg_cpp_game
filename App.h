//
// Created by Trung Dung Vu on 21/04/2022.
//
#include<SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include<iostream>
#include "Entity.h"
#include "Map.h"

using namespace std;



class App {
public:
    const int FPS = 60;
    const int frameDelay = 1000 / FPS;

    Entity *entity = NULL;
    bool Running = true;
    SDL_Window *window = NULL;
    Map *map = NULL;
    SDL_Renderer *renderer;
    static const int HEIGHT = 768;
    static const int WIDTH = 1024;
    int R = 0xff;
    int G = 0xff;
    int B = 0xff;
    int A = 0xff;

    bool Init();

    void RenderPlayer();

    void OnEvent(SDL_Event *event);

    void Render();

    void Run();
};

