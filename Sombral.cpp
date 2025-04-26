#include "Sombral.h"

Sombral::Sombral(int id, string nom, int vitesseVol) : AnimalVolant(id,nom,vitesseVol)
{
	return;
}

Sombral::~Sombral()
{
	return;
}

string Sombral::getCarnetMedical() const
{
	return "Carnet : SOMBRAL {" + getNom() + " / Vitesse : " + to_string(getVitesseVol()) + "}";
}
