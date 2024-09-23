#include <iostream>
#include <fstream>
#include "LabPractice5.h"
#include "Lab5Storage.h"
#include "Lab5Description.h"


using namespace std;

const int CAPACITY = 25;

int main(){
    int pos = 0;
    int count = 0;
    int choice;
    char delimiter = ',';
    string testString;
    string type;
    string name;
    string age;
    Pet* tempPet;
    PetStorage* myPetsStorage = new PetStorage();

    ifstream file("VetPetInfo.txt");

    file >> testString;


while ((pos = testString.find(delimiter)) != std::string::npos) {
    // type = stringParser(testString);
    // clipChunk(testString, type);
    // name = stringParser(testString);
    // clipChunk(testString, name);
    // age = stringParser(testString);
    // clipChunk(testString, age);

    int typeEnd = testString.find(delimiter);
    type = testString.substr(0, typeEnd);
    testString.erase(0, typeEnd +1);

    int nameEnd = testString.find(delimiter);
    name = testString.substr(0,nameEnd);
    testString.erase(0, nameEnd+1);

    int ageEnd = testString.find(delimiter);
    age = testString.substr(0,ageEnd);
    testString.erase(0, ageEnd+1);

    count += 1;

    tempPet = new Pet(type, name, age);
    myPetsStorage -> myPets[count] = tempPet;
}

for(int x=0; x <= count; x++){
    if(x==0){
        cout << "List of Pets: \n";
    }
    printPets(myPetsStorage, x);

}

cout << "Which pet would you like to interact with? ";
cin >> choice;
printChoicePet(myPetsStorage, choice-1);

    return 0;
}