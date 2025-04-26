#include "Licorne.h"

Licorne::Licorne(int id, string nom, int forcePhysique) : AnimalTerrestre(id, nom, forcePhysique)
{
	return;
}

Licorne::~Licorne()
{
	return;
}

string Licorne::getCarnetMedical() const
{
	return "Carnet : LICORNE {" + getNom() + " / Force : " + to_string(getForcePhyique()) + "}";
}
