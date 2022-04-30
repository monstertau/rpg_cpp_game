//
// Created by Trung Dung Vu on 21/04/2022.
//

#include "App.h"
#include "TextureManager.h"

bool App::Init() {
    int init = SDL_Init(SDL_INIT_EVERYTHING);
    if (init < 0) {
        cout << "SDL Init error: " << SDL_GetError() << endl;
        return false;
    }
    this->window = SDL_CreateWindow("Hello World", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, this->WIDTH,
                                    this->HEIGHT, 0);
    if (this->window == NULL) {
        cout << "SDL Createwindow error: " << SDL_GetError() << endl;
        return false;
    }
    renderer = SDL_CreateRenderer(this->window, -1, 0);
    if (renderer == NULL) {
        cout << "SDL create renderer error: " << SDL_GetError() << endl;
        return false;
    }
    SDL_Texture *playerTex = TextureManager::LoadTexture(
            "/Users/monstertau/CLionProjects/sample_sdl/asset/character.png", renderer);
    if (playerTex == NULL) {
        cout << "SDL load texture error: " << SDL_GetError() << endl;
        return false;
    }
    entity = new Entity(0, 0, 64, 64, playerTex, renderer);
    map = new Map(renderer, 64);
    return true;
}


void App::OnEvent(SDL_Event *event) {
    switch (event->type) {
        case SDL_QUIT:
            Running = false;
            break;
        case SDL_KEYDOWN:
            if (event->key.keysym.scancode == SDL_SCANCODE_UP) {
                entity->Move(0, -10);
            }

            if (event->key.keysym.scancode == SDL_SCANCODE_DOWN) {
                entity->Move(0, 10);
            }

            if (event->key.keysym.scancode == SDL_SCANCODE_LEFT) {
                entity->Move(-10, 0);
            }

            if (event->key.keysym.scancode == SDL_SCANCODE_RIGHT) {
                entity->Move(10, 0);
            }
            cout << "Pressed key: " << event->key.keysym.sym << endl;
            break;
        default:
            break;
    }
}

void App::Render() {
    SDL_RenderClear(renderer);
    SDL_SetRenderDrawColor(renderer, R, G, B, A);
    map->LoadMap("/Users/monstertau/CLionProjects/sample_sdl/asset/map01.dat",25,25);
    entity->Render();
    SDL_RenderPresent(renderer);
}

void App::Run() {
    if (!Init()) {
        return;
    }
    SDL_Event event;
    Uint32 frameStart;
    Uint32 frameTime;
    while (Running) {
        frameStart = SDL_GetTicks();
        while (SDL_PollEvent(&event) != 0) {
            this->OnEvent(&event);
        }
        Render();
        frameTime = SDL_GetTicks() - frameStart;
        if (frameDelay > frameTime) {
            SDL_Delay(frameDelay - frameTime);
        }

    }
}

void App::RenderPlayer() {

}
