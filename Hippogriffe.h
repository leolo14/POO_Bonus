#pragma once
#include "AnimalVolant.h"
class Hippogriffe :
    public AnimalVolant
{
public : 
    Hippogriffe(int id, string nom, int vitesseVol);
    ~Hippogriffe();

    string getCarnetMedical() const override;
};

