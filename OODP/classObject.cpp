#include <iostream>
using namespace std;

/*
    Definitions:

    - Class: A user-defined data type that serves as a blueprint for creating objects. It contains attributes and methods.
    - Attributes: These are variables defined in a class that hold the state or properties of an object.
    - Methods: These are functions defined in a class that represent the behavior or actions that an object can perform.
    - Object: An instance of a class. It is created using the class blueprint and can access attributes and methods defined in the class.
*/

// This is a class named Human. A class is like a blueprint for creating objects.
// It can have attributes (data) and methods (functions that act on the data).
class Human{
public:
    // Attribute: name - stores the name of the human
    string name;
    // Attribute: birthDate - stores the birth date of the human
    int birthDate;

    // Method: walk - this function prints a message showing that the human can walk
    void walk(){
        cout<<"I can walk"<<endl;
    };
};

// The main function is where the program starts running
int main(){
    // Creating an object 'Human1' from the Human class
    Human Human1;
    // Setting the name attribute of Human1
    Human1.name = "Harsh";
    // Setting the birthDate attribute of Human1
    Human1.birthDate = 12;

    cout<<Human1.name<<endl;
    // Calling the walk method for Human1
    Human1.walk();
    return 0;
}