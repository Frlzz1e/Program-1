//Here are some possible classes for the project and a sample of how we can interact between classes.

#include <iostream>
using namespace std;

class Pet{          //This is the data class
    public:
        Pet(){              //Default Constructor
            type = "Dog";
            name = "Doggy";
            age = 3;
            price = 5.99;
        }
        Pet(string type, string name, int age, double price = 5.99){        //constructor .... Price has a default value incase we don't pass a value
            type = type;
            name = name;
            age = age;
            price = price;
        }
        string getPet(string str);
        void setName();                 //Function to update a pet's name
        void setAge();                  //Function to update a pet's age
        
    private:
        string type;
        string name;
        int age;
        double price;

};

class PetStorage{           //This is the storage class
    public:
        string parsingMethod(); //Used to parse the text file being read in
        Pet** petArrayPtr[];
};

class PetDescription{
    void description(string name){ //helper class that will return one of three descriptions at random

    };
};

// class Procedure {            // We might not need this class, but I kept it in as an option. 
//     public:                  // to simplify the neccessary code I figured we could dumb down 
//         string name;         // the project and go with a pet description as the third class. 
//         string procedure;    // I'm open to any discussion. 
// };
