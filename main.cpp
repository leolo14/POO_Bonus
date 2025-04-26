#include "ClientBuilder.h"
#include <vector>
using namespace std;
int main(){

	vector<Client*> mesClients =vector<Client*>();

	ClientBuilder* clientBuilder = new ClientBuilder();
	try
	{
		Client* client1 = clientBuilder->nouveau()
			->setNomAnimal("Aragog")
			->setType(ANIMAL_TERRESTRE)
			->setRace(ACROMENTULE)
			->setAnimalProperty(450)
			->setNomClient("Hagrid")
			->build();

		Client* client2 = clientBuilder->nouveau()
			->setNomAnimal("Buck")
			->setType(ANIMAL_VOLANT)
			->setRace(HIPPOGRIFFE)
			->setAnimalProperty(350)
			->setNomClient("Hagrid")
			->build();

		mesClients.push_back(client1);
		mesClients.push_back(client2);
	}
	catch (ClientBuilderException e) {
		cout << e.what() << endl;
	}

	try
	{
		Client* client3 = clientBuilder->nouveau()
			->setNomAnimal("Aragog")
			->setType(ANIMAL_TERRESTRE)
			->setRace(SOMBRAL)
			->setAnimalProperty(450)
			->setNomClient("Hagrid")
			->build();


		mesClients.push_back(client3);
	}
	catch (ClientBuilderException e){
		cout << e.what() << endl;
	}

	try
	{
		Client* client4 = clientBuilder->nouveau()
			->setNomAnimal("Aragog")
			->setType(ANIMAL_TERRESTRE)
			->setRace(LICORNE)
			->setAnimalProperty(450)
			->build();


			mesClients.push_back(client4);
	}
	catch (ClientBuilderException e) {
		cout << e.what() << endl;
	}

	for (auto it = mesClients.begin(); it != mesClients.end(); it++)
	{
		cout << "Nom du client : " + (*it)->getNom() << endl;
		cout << (*it)->getAnimal()->getCarnetMedical() << endl;
	}

	return 0;
}