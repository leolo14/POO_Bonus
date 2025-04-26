#include "AnimalTerrestre.h"

void AnimalTerrestre::setForcePhyique(int forcePhyique)
{
	this->forcePhyique = forcePhyique;
}

AnimalTerrestre::AnimalTerrestre(int id, string nom, int forcePhysique) : Animal(id, nom)
{
	setForcePhyique(forcePhysique);
	return;
}

AnimalTerrestre::~AnimalTerrestre()
{
	return;
}


void AnimalTerrestre::action() const
{
	cout << "L'animal terrestre : " + getNom() + " attaque et fait " + to_string(getForcePhyique()) +" de degats." << endl;
}
