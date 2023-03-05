#include "App.h"

void App::OnParticleMove(Particle& particle)
{
	// Posi��o no instante i + 1 = Posi��o no instante i + Velocidade * DT Real.
	particle.set_pos(particle.get_pos() + (particle.get_vel() * global.get_rDT()));
}