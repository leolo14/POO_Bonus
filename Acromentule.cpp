#include "Acromentule.h"

Acromentule::Acromentule(int id, string nom, int forcePhysique) : AnimalTerrestre(id,nom,forcePhysique)
{
	return;
}

Acromentule::~Acromentule()
{
	return;
}

string Acromentule::getCarnetMedical() const
{
	return "Carnet : ACROMENTULE {" + getNom() + " / Force : " + to_string(getForcePhyique()) + "}";
}
