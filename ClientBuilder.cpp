#include "ClientBuilder.h"

int ClientBuilder::id = 0;

void ClientBuilder::reinitialiser()
{
	this->animalProperty = -1;
	this->nomAnimal = "";
	this->nomClient = "";
	this->type = UNKNOWN_TYPE;
	this->race = UNKNOWN_RACE;
}

Animal* ClientBuilder::definirAnimal()
{
	if (type == UNKNOWN_TYPE)
		throw new ClientBuilderException("Aucun type d'animal specifie.");
	if (race == UNKNOWN_RACE)
		throw new ClientBuilderException("Aucune race d'animal specifie.");
	if (nomAnimal == "")
		throw new ClientBuilderException("Aucun nom d'animal specifie.");
	if (animalProperty == -1)
		throw new ClientBuilderException("Aucune valeure  specifiee pour la propriete.");

	if (type == ANIMAL_VOLANT)
	{
		switch (race)
		{
		case SOMBRAL : 
            return new Sombral(this->id++, this->nomAnimal, this->animalProperty);

		case HIPPOGRIFFE :
			return new Hippogriffe(this->id++, this->nomAnimal, this->animalProperty);
		default : 
			throw new ClientBuilderException("Race incompatible avec le type.");
		}

	}
	else
	{
		switch (race)
		{
		case LICORNE:
			return new Licorne(this->id++, this->nomAnimal, this->animalProperty);
		case ACROMENTULE:
			return new Acromentule(this->id++, this->nomAnimal, this->animalProperty);
		default:
			throw new ClientBuilderException("Race incompatible avec le type.");
		}
	}
}

Client* ClientBuilder::build()
{
	if (nomClient.empty())
		throw new ClientBuilderException("Nom vide");
	Animal* animal = definirAnimal();
	
	return new Client(this->nomClient, animal);

}
