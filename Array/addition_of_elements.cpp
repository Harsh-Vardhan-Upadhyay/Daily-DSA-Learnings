#include <iostream>
using namespace std;

int arrayAddition(int arr[],int size){
    int sum = 0;
    for(int i =0; i<size;i++){
        sum = sum+arr[i];

    }
    return sum;
}

int main(int argc, char const *argv[])
{
    int arr[100];
    int size;
    cin>>size;
    //Takind input for array elements
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }

    int sum =arrayAddition(arr,size);
    cout<<sum<<endl;
    return 0;
}
