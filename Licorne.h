#pragma once
#include "AnimalTerrestre.h"

class Licorne : public AnimalTerrestre
{
public :
	Licorne(int id, string nom, int forcePhysique);
	~Licorne();

	string getCarnetMedical() const override;
};

