/*****************************************************************//**
 * \file   Body.h
 * \brief  
 * 
 * \author Matheus Marchi Moro
 * \date   October 2022
 *********************************************************************/

#pragma once
#include "Vect.h"
class Body
/** Corpo que é simulado no programa */
{
	protected:
		// Área, massa, posição e velocidade
		double area;
		double mass;
		//double density;
		Vect position;
		Vect speed;
		//Vect acceleration;

	public:
		Body();

		double get_area();
		double get_mass();
		Vect   get_pos();
		Vect   get_speed();
};

