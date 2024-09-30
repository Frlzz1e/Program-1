#include <iostream>
#include <fstream>
#include "LabStorage.h"
#include "LabPet.h"
#include "LabDescription.h"

using namespace std;

const int CAPACITY = 25;

int main()
{
    srand(time(0));
    int pos = 0;
    int count = 0;
    int choice;
    int menuChoice;
    int randomDescription = (rand() % 3) + 1;
    string type;
    string name;
    string age;
    PetStorage *myPetsStorage = new PetStorage();

    count = dogfile(type, name, age, myPetsStorage);

    do
    {
        cout << "\n\nWelcome to our Veterinary Office! What would you like to do today?" << endl;
        cout << "1. View the Pets in the Kennel" << endl;
        cout << "2. Add a Pet to the Kennel" << endl;
        cout << "3. Update Pet Info" << endl;
        cout << "4. Leave the Clinc" << endl;
        cin >> menuChoice;

        while (menuChoice < 1 || menuChoice > 4)
        {
            cout << "\nOops you entered an invalid choice! Please enter 1, 2, or 3!" << endl;
            cin >> menuChoice;
        }
        switch (menuChoice)
        {
        case 1:
            for (int x = 0; x <= count; x++)
            {
                if (x == 0)
                {
                    cout << "*****************************";
                    cout << "\nList of Pets: \n";
                }
                printPets(myPetsStorage, x);
            }

            cout << "\nWhich pet would you like to interact with? " << endl;
            cin >> choice;
            printChoicePet(myPetsStorage, choice - 1);
            randomDescription = (rand() % 3) + 1;
            displayPetDescription(choice - 1, randomDescription, myPetsStorage);
            break;

        case 2:
            count = addNewPet(myPetsStorage, count, type, name, age);
            break;

        case 3:
            setInfo(myPetsStorage, count);
            break;

        case 4:
            cout << "\nHave a fantastic day!" << endl;
            return 0;
            break;
            
        }
    } while (menuChoice != 4);
}