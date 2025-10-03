#include <vulkan/vulkan.hpp>
#include <SDL3/SDL.h>
#include <SDL3/SDL_main.h>

#include <decode.h>
#include <resources.h>

#define WIDTH 800
#define HEIGHT 600

SDL_AppResult SDL_AppInit(void **appstate, int argc, char **argv) {
    Resources::window = SDL_CreateWindow("Fabulae", WIDTH, HEIGHT, SDL_WINDOW_VULKAN | SDL_WINDOW_RESIZABLE);
    if (!Resources::window) {
        SDL_Log("Failed to create window: %s", SDL_GetError());
    }
    return SDL_APP_CONTINUE;
}
SDL_AppResult SDL_AppEvent(void *appstate, const SDL_Event *event) {
    return SDL_APP_CONTINUE;
}
SDL_AppResult SDL_AppIterate(void *appstate) {
    return SDL_APP_CONTINUE;
}
SDL_AppResult SDL_AppRender(void *appstate) {
    return SDL_APP_CONTINUE;
}
void SDL_Quit(void *appstate) {
    SDL_Quit();
}