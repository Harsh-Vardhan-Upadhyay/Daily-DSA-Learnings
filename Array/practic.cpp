#include <iostream>
using namespace std;

void printArray(int arr[], int size, int index)
{
    
        cout << arr[index] << endl; // Print the element at the specified index
    
}

int main(int argc, char const *argv[])
{
    int number[4] = {1, 2, 3, 4};
    
    printArray(number, 4, 3); // This will print the element at index 3, which is 4

    return 0;
}


ch[3]={'a','b','c'}