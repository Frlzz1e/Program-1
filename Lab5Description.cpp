#include "Lab5Description.h"
#include "Lab5Pet.h"
#include "Lab5Storage.h"
#include <iostream>
int randomDescription = (rand() % 3) +1;

void displayPetDescription(int descriptionChoice, int randomDescription, PetStorage *myPetsStorage ){
    string tempPetType = myPetsStorage -> myPets[descriptionChoice] -> getType();
    string tempPetName = myPetsStorage -> myPets[descriptionChoice] -> getName();
    string tempPetAge = myPetsStorage -> myPets[descriptionChoice] -> getAge();

    switch(randomDescription){
        case 1: 
            cout << tempPetName << "is a " << tempPetAge << "years old " << tempPetType << ". \n";
            cout << tempPetName << " is kind and friendly. ";
            cout << tempPetName << " has many friends";
            break;
        case 2:
            cout << tempPetName << "is a " << tempPetAge << "years old " << tempPetType << ". \n";
            cout << tempPetName << " is aggressive and not very social. \n";
            cout << tempPetName << " has no friends. \n";
            break;
        case 3:
            cout << tempPetName << "is a " << tempPetAge << "years old " << tempPetType << ". \n ";
            cout << tempPetName << " is very goofy. \n";
            cout << tempPetName << " is a staff favorite. \n";
            break;
        default:
            break;
    }
}