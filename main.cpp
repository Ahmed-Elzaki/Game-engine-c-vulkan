#include "Engine.h"
#include "Entity.h"

class Player : public Entity {
public:
    Player(int x, int y, int w, int h) : Entity(x, y, w, h) {}

    void Update() override {
        // Implement simple movement logic or other behavior
        x += 1; // Move right each frame
    }
};

int main(int argc, char* argv[]) {
    Engine engine;

    if (!engine.Init("Simple 2D Engine", 800, 600)) {
        return -1;
    }

    Player player(100, 100, 50, 50);
    engine.AddEntity(&player);

    engine.Run();
    return 0;
}
