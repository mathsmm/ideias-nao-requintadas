/*****************************************************************//**
 * \file   Vect.h
 * \brief  
 * 
 * \author Matheus Marchi Moro
 * \date   October 2022
 *********************************************************************/

#pragma once
class Vect
/** Vetor. Utiliza-se para representar e calcular grandezas vetoriais. */
{
	private:
		// Vetores são denotados por coordenadas. No caso desta aplica-
		// ção, dispõe-se de vetores bidimensionais (duas coordenadas).
		double x;
		double y;

	public:
		Vect(double coordX, double coordY)
		/**
		 * Inicializa um vetor a partir de uma coordenada X e uma coordenada Y.
		 *
		 * \param coordX Coordenada X;
		 * \param coordY Coordenada Y.
		 */
		{
			this->x = coordX;
			this->y = coordY;
		}

		Vect(double firstX, double firstY, double lastX, double lastY)
		/**
		 * Inicializa um vetor a partir das coordenadas de dois pontos
		 * Vect(AB) = B - A.
		 * 
		 * \param firstX Coordenada X do primeiro ponto;
		 * \param firstY Coordenada Y do primeiro ponto;
		 * \param lastX Coordenada X do último ponto;
		 * \param lastY Coordenada Y do último ponto.
		 */
		{
			this->x = lastX - firstX;
			this->y = lastY - firstY;
		}
};

