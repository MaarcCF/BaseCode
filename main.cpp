#include "game.h"

int main(int argc, char* args[])
{
	game game;
	SDL_Event event;
	int r = 150, g = 120, b = 100;

	game.init("Ejercicio 1", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 1600, 900, true);

	while (game.isRunning())
	{
		while (SDL_PollEvent(&event)) {
			game.handleEvents(event);
		}
		game.update();
		game.render(r -= 1, g += 1, b);
	}
	game.clean();
	return 0;
}
