#include "App.h"

void App::OnRenderClear()
{
	// Seta a cor atual para preto e o alfa para o m�ximo
	SDL_SetRenderDrawColor(renderer, 0, 0, 0, SDL_ALPHA_OPAQUE);

	// Preenche a tela com a cor atual
	SDL_RenderClear(renderer);
}