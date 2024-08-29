#include <iostream>
using namespace std;

bool isPrime(int number)
{
    for(int i =2 ; i<number; i++)
    {
        if(number%i==0){
            return 0;
        }

    }
    return 1;
}

int main(){
    int n;
    cin>>n;
    if(isPrime(n)){
        cout<<"Is a prime"<<endl;
    }
    else{cout<<"is not a prime"<<endl;}
}
