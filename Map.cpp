//
// Created by Trung Dung Vu on 30/04/2022.
//

#include "Map.h"
#include <fstream>
#include "TextureManager.h"

using namespace std;

Map::Map(SDL_Renderer *ren, int tileSize) {
    renderer = ren;
    this->tileSize = 32;
    src.x = src.y = 0;
    src.w = src.h = tileSize;
    dest.w = dest.h = tileSize;
}

void Map::DrawMap() {

}

void Map::LoadMap(const char *path, int sizeX, int sizeY) {
    char c;
    fstream mapFile;
    mapFile.open(path);
    int srcX, srcY;

    for (int y = 0; y < sizeY; y++) {
        for (int x = 0; x < sizeX; x++) {
            mapFile.get(c);
            dest.x = x * tileSize * 2;
            dest.y = y * tileSize * 2;
            mapFile.ignore();
            switch (c) {
                case '0': {
                    SDL_Texture *tex0 = TextureManager::LoadTexture(
                            "/Users/monstertau/CLionProjects/sample_sdl/asset/0.png",
                            renderer);
                    TextureManager::Draw(tex0, renderer, &src, &dest);
                    break;
                }
                case '1': {
                    SDL_Texture *tex1 = TextureManager::LoadTexture(
                            "/Users/monstertau/CLionProjects/sample_sdl/asset/1.png",
                            renderer);
                    TextureManager::Draw(tex1, renderer, &src, &dest);
                    break;
                }
                case '2': {
                    SDL_Texture *tex2 = TextureManager::LoadTexture(
                            "/Users/monstertau/CLionProjects/sample_sdl/asset/2.png",
                            renderer);
                    TextureManager::Draw(tex2, renderer, &src, &dest);
                    break;
                }
                case '3': {
                    SDL_Texture *tex3 = TextureManager::LoadTexture(
                            "/Users/monstertau/CLionProjects/sample_sdl/asset/3.png",
                            renderer);
                    TextureManager::Draw(tex3, renderer, &src, &dest);
                    break;
                }
                case '4': {
                    SDL_Texture *tex4 = TextureManager::LoadTexture(
                            "/Users/monstertau/CLionProjects/sample_sdl/asset/4.png",
                            renderer);
                    TextureManager::Draw(tex4, renderer, &src, &dest);
                    break;
                }
                case 5: {
                    SDL_Texture *tex5 = TextureManager::LoadTexture(
                            "/Users/monstertau/CLionProjects/sample_sdl/asset/5.png",
                            renderer);
                    TextureManager::Draw(tex5, renderer, &src, &dest);
                    break;
                }
            }
        }
        mapFile.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
//        printf("test");
    }

    mapFile.ignore();
    mapFile.close();
}
