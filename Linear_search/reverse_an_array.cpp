#include <iostream>
using namespace std;

void reverse(int arr[],int size){
    int start = 0;
    int end = size-1;

    while(start<=end){
        swap(arr[start],arr[end]);
        start ++;
        end--;
    }
}

void printer(int arr[], int size){
    for(int i = 0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


int main(int argc, char const *argv[])
{
    int arr[4]= {1,2,3,4};
    int size = 4;
    

    reverse(arr,size);
    printer(arr,size);
    return 0;
}
