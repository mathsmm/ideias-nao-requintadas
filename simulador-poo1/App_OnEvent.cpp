/*****************************************************************//**
 * \file   App_OnEvent.cpp
 * \brief  
 * 
 * \author Matheus Marchi Moro
 * \date   October 2022
 *********************************************************************/

#include "App.h"

void App::OnEvent(SDL_Event event) 
/** Trata eventos do SDL */
{
	switch (event.type) 
	{
		//Tecla pressionada
		case SDL_KEYDOWN:
			switch (event.key.keysym.sym) 
			{
				//Escape (Esc)
				case SDLK_ESCAPE:
					Running = false;
					break;

				default: break;
			}
			break;

		case SDL_QUIT:
			Running = false;
			break;

		default: break;
	}
}