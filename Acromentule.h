#pragma once
#include "AnimalTerrestre.h"

class Acromentule : public AnimalTerrestre
{
public :
	Acromentule(int id, string nom, int forcePhysique);
	~Acromentule();

	string getCarnetMedical() const override;
};

