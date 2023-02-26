/*****************************************************************//**
 * \file   App_OnCleanup.cpp
 * \brief  
 * 
 * \author Matheus Marchi Moro
 * \date   October 2022
 *********************************************************************/

#include "App.h"

void App::OnCleanup() 
/** Limpa objetos da memória e finaliza o SDL */
{
	SDL_FreeSurface(Main_Surface);

	SDL_DestroyWindow(Window);

	SDL_Quit();
}