#pragma once
#include <string>
#include "Terrestre.h"
#include "Client.h"

class ClientBuilder
{
private:
	string nomClient;
	string nomAnimal;
	string type;
	string race;

	void reinitialiser();
	Animal* definirAnimal();

public:
	ClientBuilder() { reinitialiser(); }
	
	ClientBuilder* nouveau() { reinitialiser(); return this; }
	ClientBuilder* setNomClient(string nomClient) { this->nomClient = nomClient; return this; };
	ClientBuilder* setNomAnimal(string nomAnimal) { this->nomAnimal = nomAnimal; return this; };
	ClientBuilder* setType(string type) { this->type = type; return this; };
	ClientBuilder* setRace(string race) { this->race = race; return this; };

	Client* build();

};

