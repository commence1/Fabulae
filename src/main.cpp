#include <Vulkan/vulkan.hpp>
#include <SDL3/sdl.h>
#include <SDL3/sdl_main.h>

#include <decode.h>

SDL_AppResult SDL_AppInit(void **appstate, int argc, char **argv) {
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