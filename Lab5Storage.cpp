#include "Lab5Pet.h"
#include "Lab5Storage.h"

char delimiter = ',';

void printPets(PetStorage *myPetsStorage, int count){
    string tempPetName = myPetsStorage -> myPets[count] -> getName();
    cout << count+1 << "." << tempPetName << endl;
}
void printChoicePet(PetStorage *myPetsStorage, int choice){
    string tempPetType = myPetsStorage -> myPets[choice] -> getType();
    string tempPetName = myPetsStorage -> myPets[choice] -> getName();
    string tempPetAge = myPetsStorage -> myPets[choice] -> getAge();
    cout  << "Type: " << tempPetType << endl;
    cout  << "Name: " << tempPetName << endl;
    cout  << "Age: " << tempPetAge << endl;
}
string stringParser(string testString){
    int typeEnd = testString.find(delimiter);
    string chunk = testString.substr(0, typeEnd);
    return chunk;
}
string clipChunk(string testString, string chunk){
    testString.erase(0, chunk.length() +1);
    return testString;
}
