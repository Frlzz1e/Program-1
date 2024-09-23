#ifndef Lab5PDescription_H
#define Lab5Description_H
#include <iostream>
#include <ctime>
#include "Lab5Pet.h"
#include "Lab5Storage.h"
using namespace std;

class Description{
    int descriptionChoice;
    int randDescription;
};
void displayPetDescription(int descriptionChoice, int randDescrition, PetStorage *myPetsStorage);

#endif