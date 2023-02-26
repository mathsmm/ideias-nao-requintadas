/*****************************************************************//**
 * \file   Circle.h
 * \brief  
 * 
 * \author Matheus Marchi Moro
 * \date   October 2022
 *********************************************************************/

#pragma once
#include "Body.h"
class Circle : Body 
/** Corpo que representa um c�rculo. */
{
	private:
		// Raio e circunfer�ncia
		double radius;
		double circumference;

	public:
		Circle(double radius, Vect initialPosition, Vect initalSpeed);

		double get_rad();
		double get_circum();
};

