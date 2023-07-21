#include <iostream>
#include <SDL3/SDL.h>

__declspec(dllexport) int out()
{
    SDL_Init(SDL_INIT_EVERYTHING);
    
    SDL_Window* window = SDL_CreateWindow("engine", 960, 600, 0);
    SDL_Renderer* renderer = SDL_CreateRenderer(window, nullptr, 0);

    bool isquit = false;

    SDL_Event e;

    while (!isquit)
    {
        while (SDL_PollEvent(&e)) {
            if (e.type == SDL_EVENT_QUIT) isquit = true;
        }
    }

    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);

    SDL_Quit();
    return 0;
}