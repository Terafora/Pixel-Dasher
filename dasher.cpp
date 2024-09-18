#include "raylib.h"

int main() {

    // Window dimensions
    const int windowWidth{512};
    const int windowHeight{380};

    // Initialize window
    InitWindow(windowWidth, windowHeight, "Pixel Dasher");

    // Rectangle dimensions
    const int width{50};
    const int height{80};

    int posY{windowHeight - height};
    int velocity {0};

    SetTargetFPS(60);
    while (!WindowShouldClose()) {
        // Begin drawing
        BeginDrawing();
        ClearBackground(RAYWHITE);

        // Check for input
        if (IsKeyDown(KEY_SPACE)) {
            velocity = -5;
        } else {
            velocity = 5;
        }

        posY += velocity;

        DrawRectangle(windowWidth / 2, posY, width, height, MAROON);

        // Stop drawing
        EndDrawing();
    }
	
}