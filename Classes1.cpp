//Here are some possible classes for the project and a sample of how we can interact between classes.

#include <iostream>
using namespace std;

class Pet{
    public:
        string type;
        string name;
        int age;
};
class Procedures{
    public:
        string name;
        string procedureName;
};

class Bills{
    public:
        string name;
        double dollars;
};

Pet* createAPet(string type, string name, int age);

Procedures* addProcedure(Pet* vetPets, string procedure);

void printPets(Pet* vetPets, int count);

void printProcedures(Procedures* myProcedures);



int main(){

    Pet** vetPets;
    Procedures** myProcedures;
    string type; 
    string name;
    int age;

    int numPets;
    int numProcedures;
    int count;

    cout << "how many new pets? ";
    cin >> numPets;
   
    vetPets = new Pet* [numPets];

    for(int i=0; i<numPets; i++){

        cout <<"type? ";
        cin >> type;
        cout <<"name? ";
        cin >> name;
        cout <<"age? ";
        cin >> age;
        
        vetPets[i] = createAPet(type, name, age);
    }

    cout << "How many new procedures?";
    cin >> numProcedures;

    myProcedures = new Procedures* [numProcedures];

    for (int i=0; i<numPets; i++){
        printPets(vetPets[i], i+1);
    }
    
    for (int i=0; i < numProcedures; i++){
        int choice;
        string procedure;

        cout << "Enter pet number: ";
        cin >> choice;
        cout << "Enter procedure: ";
        cin >> procedure;

        
        myProcedures[i] = addProcedure(vetPets[choice-1], procedure);
    }
    
   for (int i=0; i < numProcedures; i++){
        printProcedures(myProcedures[i]);
    }
    return 0;
}

Pet* createAPet(string type, string name, int age){
    Pet* aPet = new Pet;

    aPet -> type = type;
    aPet -> name = name;
    aPet -> age = age;

    return aPet;
}

void printPets(Pet* vetPets, int count){
    cout << count << ":" << "\n";
    cout << vetPets -> type << "\n";
    cout << vetPets -> name << "\n";
    cout << vetPets -> age << "\n";
}

Procedures* addProcedure(Pet* vetPets, string procede){
    Procedures* newProcedure = new Procedures;
    
    newProcedure -> name = vetPets -> name;
    newProcedure -> procedureName = procede;

    return newProcedure;
}

void printProcedures(Procedures* myProcedures){

    cout << myProcedures -> name << ": " ;
    cout << myProcedures -> procedureName;
}
