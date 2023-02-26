/*****************************************************************//**
 * \file   App_OnInit.cpp
 * \brief  
 * 
 * \author Matheus Marchi Moro
 * \date   October 2022
 *********************************************************************/

#include "App.h"

bool App::OnInit() 
/**
 * Inicia funcionalidades do SDL e propriedades de App.
 * 
 * \return true caso haja sucesso, false caso não haja.
 */
{
	if (SDL_Init(SDL_INIT_EVERYTHING) < 0) 
	{
		return false;
	}

	Window = SDL_CreateWindow(
		"Simulador",
		SDL_WINDOWPOS_UNDEFINED,
		SDL_WINDOWPOS_UNDEFINED,
		Global->get_Width(), 
		Global->get_Heigth(),
		SDL_WINDOW_RESIZABLE | SDL_WINDOW_OPENGL
	);

	Renderer = SDL_CreateRenderer(Window, -1, SDL_RENDERER_ACCELERATED);

	Main_Surface = SDL_GetWindowSurface(Window);

	if (
		Window       == NULL ||
		Renderer     == NULL ||
		Main_Surface == NULL
		) 
	{
		return false;
	}

	return true;
}