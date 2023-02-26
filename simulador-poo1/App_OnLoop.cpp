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
 * É executado quando houver iteração do laço do simulador;
 * 
 * OnLoop é responsável por atualizar variáveis do simulador, 
 * verificar colisão, etc.
 */
{
    SDL_Rect rect = { 100,100,440,280 };
    SDL_FillRect(Main_Surface, &rect, SDL_MapRGB(Main_Surface->format, 255, 0, 0));

    SDL_UpdateWindowSurface(Window);

    //SDL_RenderDrawRect(Renderer, &rect);
}