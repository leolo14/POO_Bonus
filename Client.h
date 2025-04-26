#pragma once
#include <string>
#include "Animal.h"
using namespace std;

class Client
{
private :
	string nom;
	Animal* animal;

	void setNom(string nom);
	

public:
	Client(string nom, Animal* animal);
	Client(const Client& client) = delete;
	~Client();

	void setAnimal(Animal* animal);

	string getNom() const { return nom; }
	Animal* getAnimal() const { return animal; }
	
};

