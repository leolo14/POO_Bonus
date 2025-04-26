#pragma once
#include <string>
#include "Licorne.h"
#include "Sombral.h"
#include "Acromentule.h"
#include "Hippogriffe.h"
#include "Client.h"
#include "AnimalTerrestre.h"
#include "AnimalVolant.h"
#include "ClientBuilderException.h"

#include "Animal.h"

enum TypeAnimal {
	UNKNOWN_TYPE,
	ANIMAL_VOLANT,
	ANIMAL_TERRESTRE
};

enum RaceAnimal {
	UNKNOWN_RACE,
	LICORNE,
	ACROMENTULE,
	SOMBRAL,
	HIPPOGRIFFE
};

class ClientBuilder
{
	
private:
	string nomClient;
	string nomAnimal;
	TypeAnimal type;
	RaceAnimal race;

	static int id;

	int animalProperty;

	void reinitialiser();
	Animal* definirAnimal();

public:
	ClientBuilder() { reinitialiser(); }
	
	ClientBuilder* nouveau() { reinitialiser(); return this; }
	ClientBuilder* setAnimalProperty(int animalProperty) { this->animalProperty = animalProperty; return this; }
	ClientBuilder* setNomClient(string nomClient) { this->nomClient = nomClient; return this; };
	ClientBuilder* setNomAnimal(string nomAnimal) { this->nomAnimal = nomAnimal; return this; };
	ClientBuilder* setType(TypeAnimal type) { this->type = type; return this; };
	ClientBuilder* setRace(RaceAnimal race) { this->race = race; return this; };

	Client* build();

};

