#pragma once
#include <string>
#include "Animal.h"


class AnimalTerrestre : public Animal
{
private :
	int forcePhyique;

	void setForcePhyique(int forcePhyique);

public:
	AnimalTerrestre(int id, string nom, int forcePhysique);
	~AnimalTerrestre();

	int getForcePhyique() const { return forcePhyique; }
	virtual string getCarnetMedical() const = 0;

	void action() const override;
};

