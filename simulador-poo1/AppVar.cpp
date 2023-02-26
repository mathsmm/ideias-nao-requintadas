/*****************************************************************//**
 * \file   AppVar.cpp
 * \brief  
 * 
 * \author Matheus Marchi Moro
 * \date   October 2022
 *********************************************************************/

#include "AppVar.h"

AppVar::AppVar(int fps, int width, int heigth) 
/**
 * Inicializa um objeto AppVar responsável por armazenar variáveis
 * globais de App.
 * 
 * \param fps frames por segundo da janela SDL
 * \param width largura da janela SDL
 * \param heigth altura da janela SDL
 */
{
	this->Fps = fps;
	this->Width = width;
	this->Height = heigth;
	this->Half_width = width/2;
	this->Half_height = heigth/2;
}

int AppVar::get_Fps() { return this->Fps; }
int AppVar::get_Width() { return this->Width; }
int AppVar::get_Heigth() { return this->Height; }
int AppVar::get_Half_width() { return this->Half_height; }
int AppVar::get_Half_heigth() { return this->Half_height; }