#include "LabPet.h"
#include "LabStorage.h"
using namespace std;


string Pet::getName(){
    return name;
}
string Pet::getType(){
    return type;
}
string Pet::getAge(){
    return age;
}
void Pet::setName(string updatedName){
     name = updatedName;
}
void Pet::setAge(string updatedAge){
    age = updatedAge;
}