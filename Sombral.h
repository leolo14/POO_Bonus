#pragma once
#include "AnimalVolant.h"
class Sombral :
    public AnimalVolant
{
public : 
    Sombral(int id, string nom, int vitesseVol);
    ~Sombral();

    string getCarnetMedical() const override;

};

