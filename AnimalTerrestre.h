#pragma once
#include <string>
#include "Animal.h"


class AnimalTerrestre : public Animal
{
private :
	int forcePhyique;
	string capaciteSpeciale;

public:
	AnimalTerrestre(int id, string nom, string capaciteSpeciale);
	AnimalTerrestre(const AnimalTerrestre& animal);
	~AnimalTerrestre();

	virtual string getNom() const override { return "Animal Terrestre"; }

	virtual void setForcePhyique(int forcePhyique) = 0;
	virtual void setCapaciteSpeciale(string capaciteSpeciale) = 0;

	virtual int getForcePhyique() const = 0;
	virtual string getCapaciteSpeciale() const = 0;

	virtual void getCarnetMedical() const override { 
		cout << "Animal Terrestre num :" + getId() << endl;
	}
};

