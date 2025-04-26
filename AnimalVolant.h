#pragma once
#include "Animal.h"

class AnimalVolant : public Animal
{
private :
	int vitesseVol;

public:
	AnimalVolant(int id, string nom, int vitesseVol);
	AnimalVolant(const AnimalVolant& animal);
	~AnimalVolant();
	
	void setVitesseVol(int vitesseVol);
	int getVitesseVol() const;

	void getCarnetMedical() const override;
};

