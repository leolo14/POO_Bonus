#include "Animal.h"



Animal::Animal(int id, string nom)
{
	setId(id);
	setNom(nom);
}

Animal::~Animal()
{
	return;
}

void Animal::setId(int id)
{
	this->id = id;
}

void Animal::setNom(string nom)
{
	this->nom = nom;
}



