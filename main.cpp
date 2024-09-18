#include "main.h"
using namespace std;

int main()
{
    int petNum;
    int menuChoice;

    petNum = getPetData();
    cout << petNum << " pets are in the kennel." << endl;
    cout << "What would you like to do today?" << endl;
    cout << "1. Choose Pet" << endl;
    cout << "2. Leave Office" << endl;
    switch (menuChoice)
    {
    case 1:
        choosePet();
        break;
    
    case 2:
        printBill();
        cout << "Thank you for choosing our Veterinary Office, have a great day!" << endl;
        break;

    default:
        cout << "Oops! Choose either 1 or 2." << endl;
        break;
    }
    
}