#include <iostream>
using namespace std;

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