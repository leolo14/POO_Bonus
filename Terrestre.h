#pragma once
#include "AnimalTerrestre.h"

class Terrestre : public AnimalTerrestre
{
public :

	Terrestre(int id, string nom, string capaciteSpeciale) ;
	Terrestre(const Terrestre& animal);
	~Terrestre();

	string getNom() const override { return "Jai pas didee de nom"; }

	void setForcePhyique(int forcePhyique) override   ;
	void setCapaciteSpeciale(string capaciteSpeciale) override;

	int getForcePhyique() const override;
	string getCapaciteSpeciale() const override;

	void getCarnetMedical() const override;
};

