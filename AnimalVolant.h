#pragma once
#include "Animal.h"

class AnimalVolant : public Animal
{
private :
	int vitesseVol;

	void setVitesseVol(int vitesseVol);

public:
	AnimalVolant(int id, string nom, int vitesseVol);
	~AnimalVolant();
	
	int getVitesseVol() const {return vitesseVol; } 
	virtual string getCarnetMedical() const = 0;

	void action() const override;
};

