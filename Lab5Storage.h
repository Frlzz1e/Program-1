#ifndef Lab5Storage_H
#define Lab5Storage_H

#include "Lab5Pet.h"
using namespace std;

class PetStorage{           //storage class 
    public:
        char delimiter;
        Pet* myPets[10];
        PetStorage(){
            Pet* myPet = new Pet();
            myPets[0] = myPet;
        }

        
};
void printPets(PetStorage *myPetsStorage, int count);
void printChoicePet(PetStorage *myPetsStorage, int choice);
string stringParser(string testString);
string clipChunk(string testString, string chunk);
#endif