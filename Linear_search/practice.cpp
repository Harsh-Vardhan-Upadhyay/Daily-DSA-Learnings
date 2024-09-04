#include <iostream>
using namespace std;

bool search(int arr[],int size,int number){

    for(int i=0;i<size;i++){
        if(arr[i]==number){
            return 1;
        }
        
    }
    return 0;
}

int main(){
 
 int arr[10]= {1,2,3,4,5,6,7,8,9,10};

cout<<"enter the element that you want to search"<<endl;
int number;
cin>>number;

cout<<"Enter the size of the array"<<endl;
int size;
cin>>size;

bool found = search(arr , size , number);
if(found){
    cout<<"The number "<<number <<" was found"<<endl;}
else{
    cout<<"The number "<<number<<" was not found"<<endl;
} 



return 0;
}