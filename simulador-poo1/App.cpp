/*****************************************************************//**
 * \file   App.cpp
 * \brief  
 * 
 * \author Matheus Marchi Moro
 * \date   October 2022
 *********************************************************************/

#include "App.h"

App::App() 
{
	Global = new AppVar(60, 640, 480);
	Window = NULL;
	Renderer = NULL;
	Main_Surface = NULL;
	Running = true;
}

int App::OnExecute() 
/**
 * Inicializa o SDL, vari�veis de App e loop do simulador.
 *
 * \return -1 caso o SDL n�o seja inicializado e 0 ao t�rmino da execu��o.
 */
{
	

	// Inicia o SDL e retorna true caso haja sucesso
	if (OnInit() == false) 
	{
		return -1;
	}

	// Estrutura que cont�m informa��es sobre eventos
	SDL_Event event;

	// La�o de repeti��o do simulador
	while (Running) 
	{
		// Checa por eventos e os percorre um por vez a partir de uma fila.
		// A fila � preenchida por eventos toda vez que o SDL detecta um input.
	    // Lista de eventos : https://wiki.libsdl.org/SDL_Event#data_fields.
		while (SDL_PollEvent(&event)) 
		{
			OnEvent(event);
		}

		OnLoop();
		OnRender();
	}

	OnCleanup();

	return 0;
}