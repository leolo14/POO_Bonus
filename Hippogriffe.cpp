#include "Hippogriffe.h"

Hippogriffe::Hippogriffe(int id, string nom, int vitesseVol) : AnimalVolant(id, nom, vitesseVol)
{
	return;
}

Hippogriffe::~Hippogriffe()
{
	return;
}

string Hippogriffe::getCarnetMedical() const
{
	return "Carnet : HIPPOGRIFFE {" + getNom() + " / Vitesse : " + to_string(getVitesseVol()) + "}";
}