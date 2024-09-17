#include "raylib.h"

int main() {

    // Window dimensions
    const int windowWidth = 512;
    const int windowHeight = 380;

    // Initialize window
    InitWindow(windowWidth, windowHeight, "Pixel Dasher");

    SetTargetFPS(60);
    while (!WindowShouldClose()) {
        // Begin drawing
        BeginDrawing();
        ClearBackground(RAYWHITE);

        // Stop drawing
        EndDrawing();
    }
	
}