#include "App.h"
#include "AppUtils.h"

void App::OnParticleCollision(Particle& particle1, Particle& particle2)
{
	// Se o produto escalar entre o vetor formado pelos vetores de posi��o
	// e o vetor formado pelos vetores de velocidade for maior ou igual
	// a zero, as part�culas n�o est�o se aproximando
	if (Vect(particle1.get_pos(), particle2.get_pos()) *
		Vect(particle1.get_vel(), particle2.get_vel()) >= 0)
	{
		return;
	}

	// Se a soma dos raios das part�culas for menor que a dist�ncia 
	// entre as posi��es das part�culas, n�o h� colis�o
	if (particle1.get_rad() + particle2.get_rad() <
		AppUtils::s_DistanceBetweenParticles(particle1, particle2))
	{
		SDL_Log("N�o vou colidir");
		return;
	}

	SDL_Log("Colis�o!");

	// Para maiores esclarecimentos,
	// https://www.vobarian.com/collisions/2dcollisions2.pdf
	// Este PDF tamb�m est� na pasta "Utilidades" deste reposit�rio

	// Acr�nimos:
	// v  -> Vetor
	// uV -> Vetor unit�rio
	// 1  -> Referente � part�cula 1
	// 2  -> Referente � part�cula 2
	// N  -> Normal (perpendicular)
	// T  -> Tangente
	// B  -> Before collision (Antes da colis�o)
	// A  -> After collision (Depois da colis�o)
	// c  -> Componente (grandeza escalar)
	// m  -> Massa

	// Passo 1 - Achar vetor unit�rio normal e vetor unit�rio tangente.
	// Eles formam "eixos" que ser�o utilizados em passos seguintes

	// "Eixo y"
	Vect uVN = Vect(particle1.get_pos(), particle2.get_pos()).unitVect();
	
	// "Eixo x"
	Vect uVT = Vect(-uVN.get_y(), uVN.get_x());

	// Passo 2 - Criar os vetores de velocidade inicial 
	// (antes da colis�o) de ambos os c�rculos. 
	// OBS: Eles j� existem (objParticle.getVel())

	// Passo 3 - Projetar os vetores de velocidade inicial
	// nos vetores unit�rios normal e tangente.
	// Isto pode ser feito ao efetuar o produto escalar entre
	// os vetores unit�rios e os vetores de velocidade
	double v1NBc = uVN * particle1.get_vel();
	double v1TBc = uVT * particle1.get_vel();
	double v2NBc = uVN * particle2.get_vel();
	double v2TBc = uVT * particle2.get_vel();

	// Passo 4 - Encontrar as velocidades tangenciais
	// p�s-colis�o. Elas s�o iguais �s pr�-colis�o
	double v1TAc = v1TBc;
	double v2TAc = v2TBc;

	// Passo 5 - Encontrar as velocidades normais
	// p�s-colis�o. Utiliza-se as f�rmulas de momento
	// e de energia cin�tica em uma dimens�o
	double m1 = particle1.get_mass();
	double m2 = particle2.get_mass();
	double v1NAc = (v1NBc * (m1 - m2) + 2 * m2 * v2NBc) / (m1 + m2);
	double v2NAc = (v2NBc * (m2 - m1) + 2 * m1 * v1NBc) / (m1 + m2);

	// Passo 6 - Converter componentes normais e 
	// tangenciais em vetores
	Vect v1NA = uVN * v1NAc;
	Vect v1TA = uVT * v1TAc;
	Vect v2NA = uVN * v2NAc;
	Vect v2TA = uVT * v2TAc;

	// Passo 7 - Encontrar os vetores de velocidade
	// p�s-colis�o e aplic�-los �s part�culas
	particle1.set_vel(v1NA + v1TA);
	particle2.set_vel(v2NA + v2TA);
}