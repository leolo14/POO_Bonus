#include "Terrestre.h"


Terrestre::Terrestre(int id, string nom, string capaciteSpeciale) : AnimalTerrestre(id, nom, capaciteSpeciale)
{

}


Terrestre::Terrestre(const Terrestre& animal) : AnimalTerrestre(animal)
{
}
Terrestre::~Terrestre()
{
}

void Terrestre::setForcePhyique(int forcePhyique)
{
	if (forcePhyique < 0)
	{
		throw Exception("La valeur doit etre positive");
	}
	
}

void Terrestre::getCarnetMedical() const 
{
	cout << "TERRESTRE {" + getNom() + "/" + getCapaciteSpeciale() + "/" + to_string(getId()) + "}" << endl;
}


