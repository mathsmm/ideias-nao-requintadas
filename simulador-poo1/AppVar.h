/*****************************************************************//**
 * \file   AppVar.h
 * \brief  
 * 
 * \author Matheus Marchi Moro
 * \date   October 2022
 *********************************************************************/

#pragma once
class AppVar
/** Vari�veis globais de App */
{
	private:
		// Frames por segundo da janela SDL
		int Fps;

		// Dimens�es da janela SDL
		int Width;
		int Height;
		int Half_width;
		int Half_height;
		
	public:
		AppVar(int fps, int width, int heigth);

		int get_Fps();
		int get_Width();
		int get_Heigth();
		int get_Half_width();
		int get_Half_heigth();
};

