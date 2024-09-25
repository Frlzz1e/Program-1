#include "LabPet.h"
#include "LabStorage.h"
#include <fstream>
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
int dogfile(string type, string name, string age, PetStorage* myPetsStorage)
{
Pet* tempPet;
string testString;
int pos = 0;
char delimiter = ',';
int count = 0;
ifstream file;

ifstream file("VetPetInfo.txt");

    file >> testString;
    while ((pos = testString.find(delimiter)) != std::string::npos) {

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
file.close();

return count;

}

void addNewPet(PetStorage* myPetsStorage, int count, string type , string name, string age)
{
Pet* tempPet;
ofstream outputFile;
string fileName;
fileName = "VetPetInfo.txt";

    cout << "Pets type: \n";
    getline(cin, type);
    cout << "Pets name: \n";
    getline(cin, name);
    cout << "Pets age: \n";
    getline(cin, age);
    
    tempPet = new Pet(type, name, age);
    myPetsStorage -> myPets[count] = tempPet;

//Open the file
outputFile.open(fileName);

    if (outputFile.is_open())
    {
        for(int i=0; i<count; i++)
        {
            outputFile << myPetsStorage -> myPets[count] << ",";
        }

        cout << "New animal saved." << endl << endl;

        outputFile.close();
    }

    else cout << "File could not open";

}
