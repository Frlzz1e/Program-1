#ifndef LabPet_H
#define LabPet_H
#include <iostream>
using namespace std;

class Pet{          //data class
    private:
        string type;
        string age;
        string name;

    public:
        Pet(){
            type = "dog";
            name = "doggo";
            age = "5";
        }
        Pet(string givenType, string givenName, string givenAge){
            type = givenType;
            name = givenName; 
            age = givenAge;
        }
        string getName();
        string getType();
        string getAge();
        void setName(string updatedName);
        void setAge(string updatedAge);

};
#endif