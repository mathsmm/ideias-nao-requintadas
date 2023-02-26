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
        // Objeto que armazena vari�veis "globais" de App
        AppVar* Global;

        // Aplica��o em execu��o
        bool Running;

        // SDL
        // Janela 
        SDL_Window* Window;

        // Renderizador
        SDL_Renderer* Renderer;

        // Superf�cie principal
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