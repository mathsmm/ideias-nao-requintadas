/*****************************************************************//**
 * \file   App.h
 * \brief  
 * 
 * \author Matheus Marchi Moro
 * \date   October 2022
 *********************************************************************/

#pragma once
#include <SDL.h>
#include "AppVar.h"

class App
{
    private:
        // Objeto que armazena variáveis "globais" de App
        AppVar* Global;

        // Aplicação em execução
        bool Running;

        // SDL
        // Janela 
        SDL_Window* Window;

        // Renderizador
        SDL_Renderer* Renderer;

        // Superfície principal
        SDL_Surface* Main_Surface;

    public:
        App();

        int OnExecute();

        bool OnInit();
        void OnEvent(SDL_Event event);
        void OnLoop();
        void OnRender();
        void OnCleanup();
};