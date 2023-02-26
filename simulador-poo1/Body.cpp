/*****************************************************************//**
 * \file   Body.cpp
 * \brief  
 * 
 * \author Matheus Marchi Moro
 * \date   October 2022
 *********************************************************************/

#include "Body.h"

double Body::get_area()  { return this->area; }
double Body::get_mass()  { return this->mass; }
Vect   Body::get_pos()   { return this->position; }
Vect   Body::get_speed() { return this->speed; }