#include "AnimalVolant.h"

void AnimalVolant::setVitesseVol(int vitesseVol)
{
	this->vitesseVol = vitesseVol;
}

AnimalVolant::AnimalVolant(int id, string nom, int vitesseVol) : Animal(id, nom)
{
	setVitesseVol(vitesseVol);
	return;
}

AnimalVolant::~AnimalVolant()
{
	return;
}

void AnimalVolant::action() const
{
	cout << "L'animal volant : " + getNom() + " vole a une vitesse de " + to_string(getVitesseVol()) + " km/h." << endl;
}
