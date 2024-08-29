#include <iostream>
using namespace std;

int main(){

    int n;
    int sum;
    cout<<"enter the value of n"<<endl;
    cin>>n;


    cout<<"sum from 1 to n"<<endl;

    for(int i=0; i<=n; i++){
        sum = sum+i;
        
    }
    cout <<"sum of n numbers"<<sum<<endl;

    return 0;
}