/* Program 84: Graphics Programming: Use libraries like OpenGL or SDL to create basic graphical applications. */
#include <stdio.h>
#include <SDL2/SDL.h>

int main() {
    // Initialize SDL
    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        printf("SDL could not initialize! SDL_Error: %s\n", SDL_GetError());
        return 1;
    }

    // Create a window
    SDL_Window *window = SDL_CreateWindow("SDL Window", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 640, 480, SDL_WINDOW_SHOWN);
    if (window == NULL) {
        printf("Window could not be created! SDL_Error: %s\n", SDL_GetError());
        return 1;
    }

    // Create a renderer
    SDL_Renderer *renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
    if (renderer == NULL) {
        printf("Renderer could not be created! SDL_Error: %s\n", SDL_GetError());
        return 1;
    }

    // Set renderer color
    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);

    // Clear the screen
    SDL_RenderClear(renderer);

    // Draw a rectangle
    SDL_Rect rect = {220, 160, 200, 160};
    SDL_SetRenderDrawColor(renderer, 255, 0, 0, 255);
    SDL_RenderFillRect(renderer, &rect);

    // Update screen
    SDL_RenderPresent(renderer);

    // Wait for 3 seconds
    SDL_Delay(3000);

    // Destroy renderer and window
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);

    // Quit SDL
    SDL_Quit();

    return 0;
}

/* 
   Copyright (c) 2023
   Mahendra Mahara
*/
