#include <iostream>
using namespace std;

int main(){

    int n = 712;
    int a = 0;
    int b = 1;
    int nextNumber;

    for(int i=1;i<=n;i++){
        nextNumber = a+b;
     
         a=b;
        b=nextNumber;
       
        
    }
        cout <<nextNumber <<endl;
        cout <<n%10;

    return 0;
}