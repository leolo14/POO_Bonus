#pragma once
#include <string>
#include "Exception.h"
using namespace std;
#include <iostream>

class Animal
{
private :
	int id;
	

public:
	Animal(int id);
	Animal(const Animal& animal);
	virtual ~Animal();

	void setId(int id);
	
	
	int getId() const { return id; }
	virtual string getNom() const { return "Animal"; }

	virtual void getCarnetMedical() const =0;
};

