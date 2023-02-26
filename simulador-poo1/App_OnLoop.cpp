/*****************************************************************//**
 * \file   App_OnLoop.cpp
 * \brief  
 * 
 * \author Matheus Marchi Moro
 * \date   October 2022
 *********************************************************************/

#include "App.h"

void App::OnLoop() 
/**
 * � executado quando houver itera��o do la�o do simulador;
 * 
 * OnLoop � respons�vel por atualizar vari�veis do simulador, 
 * verificar colis�o, etc.
 */
{
    SDL_Rect rect = { 100,100,440,280 };
    SDL_FillRect(Main_Surface, &rect, SDL_MapRGB(Main_Surface->format, 255, 0, 0));

    SDL_UpdateWindowSurface(Window);

    //SDL_RenderDrawRect(Renderer, &rect);
}