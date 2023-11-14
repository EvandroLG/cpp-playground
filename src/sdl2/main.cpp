#include <SDL2/SDL.h>

int main()
{
  SDL_Window *window = nullptr;
  SDL_Renderer *renderer = nullptr;

  SDL_Init(SDL_INIT_EVERYTHING);
  SDL_CreateWindowAndRenderer(640, 480, 0, &window, &renderer);

  SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
  SDL_RenderClear(renderer);

  SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
  SDL_RenderDrawPoint(renderer, 640 / 2, 480 / 2);

  SDL_RenderPresent(renderer);
  SDL_Delay(10000);
}
