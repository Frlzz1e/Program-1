#ifndef LabDescription_H
#define LabDescription_H
#include <iostream>
#include <ctime>
#include "LabPet.h"
#include "LabStorage.h"
using namespace std;

class Description{
    int descriptionChoice;
    int randDescription;
};
void displayPetDescription(int descriptionChoice, int randDescrition, PetStorage *myPetsStorage);       // this is our other class that prints a description for a selected pet

#endif