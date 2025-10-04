#define SDL_MAIN_USE_CALLBACKS

#include <vulkan/vulkan.hpp>
#include <SDL3/SDL.h>
#include <SDL3/SDL_main.h>

#include <decode.h>
#include <resources.h>

#define WIDTH 800
#define HEIGHT 600

SDL_AppResult SDL_AppInit(void **appstate, int argc, char **argv) {
    if (constexpr uint32_t flags = SDL_INIT_VIDEO; !SDL_Init(flags)) {
        SDL_Log("Failed to initialize SDL video subsystem: %s", SDL_GetError());
    }
    Fabulae::Resources::window = SDL_CreateWindow("Fabulae", WIDTH, HEIGHT, SDL_WINDOW_VULKAN | SDL_WINDOW_RESIZABLE);
    if (!Fabulae::Resources::window) {
        SDL_Log("Failed to create window: %s", SDL_GetError());
    }
    return SDL_APP_CONTINUE;
}
SDL_AppResult SDL_AppEvent(void *appstate, SDL_Event *event) {
    switch (event->type) {
        case SDL_EVENT_QUIT:
            return SDL_APP_SUCCESS;
            break;
        default:
            break;
    }
    return SDL_APP_CONTINUE;
}
SDL_AppResult SDL_AppIterate(void *appstate) {
    SDL_Delay(16);
    return SDL_APP_CONTINUE;
}
SDL_AppResult SDL_AppRender(void *appstate) {
    return SDL_APP_CONTINUE;
}
void SDL_AppQuit(void *appstate, SDL_AppResult result) {
    SDL_DestroyWindow(Fabulae::Resources::window);
    SDL_Quit();
}