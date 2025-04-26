#include "Client.h"



Client::Client(string nom, Animal* animal)
{
	setNom(nom);
	setAnimal(animal);
	
	return;
}

Client::~Client()
{
	return;
}

void Client::setAnimal(Animal* animal)
{
	this->animal = animal;
}

void Client::setNom(string nom)
{
	this->nom = nom;
}