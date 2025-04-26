#pragma once
#include <string>
#include "Animal.h"
using namespace std;

class Client
{
private :
	string nom;
	Animal* animal;

public:
	Client(string nom, Animal* animal);
	Client(const Client& client);
	~Client();

	void setNom(string nom);
	void setAnimal(Animal* animal);

	string getNom() const;
	Animal* getAnimal() const;
	
};

