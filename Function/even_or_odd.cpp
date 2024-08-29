#include <iostream>
using namespace std;

int odd_or_even(int number)
{

    if(number%2==0){
        cout<<"is even";
    }
    else{
        cout<<"is odd";
    }
return 0 ;
}

int main(){

    int a;
    cin>>a;
    cout<<odd_or_even(a);
    return 0;
}