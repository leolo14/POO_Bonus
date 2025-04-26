#pragma once
#include <string>
#include <iostream>
using namespace std;


class Animal
{
private :
	int id;
	string nom;

	void setId(int id);
	void setNom(string nom);

public:
	Animal(int id, string nom);
	Animal(const Animal& animal) = delete;
	virtual ~Animal();


	int getId() const { return id; }
	virtual string getNom() const { return nom; }

	virtual void action() const = 0;

	virtual string getCarnetMedical() const = 0;
};

