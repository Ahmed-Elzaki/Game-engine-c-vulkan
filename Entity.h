#ifndef ENTITY_H
#define ENTITY_H

#include <SDL2/SDL.h>

class Entity {
public:
    Entity(int x, int y, int w, int h) : x(x), y(y), width(w), height(h) {}

    virtual void Update() = 0;
    virtual void Render(SDL_Renderer* renderer) {
        SDL_Rect rect = { x, y, width, height };
        SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
        SDL_RenderFillRect(renderer, &rect);
    }

protected:
    int x, y, width, height;
};

#endif
