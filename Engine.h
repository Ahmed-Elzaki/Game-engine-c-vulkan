#ifndef ENGINE_H
#define ENGINE_H

#include <SDL2/SDL.h>
#include <vector>

class Entity;

class Engine {
public:
    Engine();
    ~Engine();

    bool Init(const char* title, int width, int height);
    void Run();
    void Quit();

    void AddEntity(Entity* entity);

private:
    SDL_Window* window;
    SDL_Renderer* renderer;
    bool isRunning;

    std::vector<Entity*> entities;

    void HandleEvents();
    void Update();
    void Render();
};

#endif
