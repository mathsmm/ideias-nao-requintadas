#include "App.h"

void App::OnTimeDelay()
{
	// dT recebe a diferen�a de ticks entre o come�o da
	// execu��o do la�o e o final
	global.set_dT(SDL_GetTicks() - global.get_ticks());

	if (global.get_dT() < global.get_dDT())
	{
		// Pausa a execu��o por um tempo para o FPS atingir
		// valores pr�ximos ao desejado
		SDL_Delay((Uint32)(global.get_dDT() - global.get_dT()));
	}

	// Mostra o FPS atual
	//SDL_Log("FPS: %i", 1000 / (SDL_GetTicks() - global.get_ticks()));

	// rDT recebe a diferen�a REAL de ticks entre o come�o
	// da execu��o do la�o e o final. (O tempo de execu��o 
	// deste m�todo tamb�m � relevante!)
	global.set_rDT((SDL_GetTicks() - global.get_ticks()) / 1000.0);
}