#include <iostream>
#include <fstream>
#include "LabStorage.h"
#include "LabDescription.h"


using namespace std;

const int CAPACITY = 25;

int main(){
    srand(time(0));
    int pos = 0;
    int count = 0;
    int choice;
    char delimiter = ',';
    int randomDescription = (rand() % 3) +1;
    string testString;
    string type;
    string name;
    string age;
    Pet* tempPet;
    PetStorage* myPetsStorage = new PetStorage();

count = dogfile(type, name, age , myPetsStorage);



cout << "Which pet would you like to interact with? ";
cin >> choice;
printChoicePet(myPetsStorage, choice-1);

displayPetDescription(choice -1,randomDescription, myPetsStorage);

    return 0;
}
