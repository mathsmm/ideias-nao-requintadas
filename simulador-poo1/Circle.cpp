/*****************************************************************//**
 * \file   Circle.cpp
 * \brief  
 * 
 * \author Matheus Marchi Moro
 * \date   October 2022
 *********************************************************************/

#include "Circle.h"
#include <math.h>
#define PI 3.14159265358979323846

Circle::Circle(double radius, Vect initialPosition, Vect initalSpeed) 
/**
 * Inicializa um objeto que representa um corpo circular.
 * 
 * \param radius raio do círculo;
 * \param initialPosition posição inicial do corpo (Vect)
 * \param initalSpeed velocidade inicial do corpo (Vect)
 */
{
	this->radius = radius;
	this->circumference = 2 * PI * radius;
	this->area = PI * pow(radius, 2.0);
	this->mass = this->area; //massa = área
	this->position = initialPosition;
	this->speed = initalSpeed;
}

double Circle::get_rad()    { return this->radius; }
double Circle::get_circum() { return this->circumference; }