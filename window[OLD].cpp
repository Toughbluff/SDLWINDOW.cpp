#include "SDL.h"

int main(int argc, char* argv[]) {
	SDL_Init(SDL_INIT_EVERYTHING);
	SDL_Window* window = SDL_CreateWindow("Shape Vortext", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 600, 400, SDL_WINDOW_SHOWN);
	SDL_Renderer* rendere = SDL_CreateRenderer(window, -1, 0);

	SDL_SetRenderDrawColor(rendere, 255,211,61,255); //r, g, b, a
	SDL_RenderClear(rendere);
	SDL_RenderPresent(rendere);

	SDL_Delay(3000);

	return 0;
}
