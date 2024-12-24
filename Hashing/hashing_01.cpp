#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int checkFor ;
    int array[20]; 
    int size;
    
    cout<<"Enter the size of the array: ";
    cin >> size;


    cout<<"Enter the numbers: ";
    for(int i = 0; i < size; i++){
        cin>>array[i];
    }


    //Hashing 
    int hash[13] = {0};
    for(int i = 0; i < size; i++){
        hash[array[i]] += 1;
    }

    cout<<"Enter the number that you would like to check : ";
    cin >> checkFor;
    cout<<"The number is repeted for "<<hash[checkFor]<<" times"<<endl;

    return 0;
}
