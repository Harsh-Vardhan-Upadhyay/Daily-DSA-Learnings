#include <iostream>
using namespace std;

int fib(int n)
{
    int a = 0;
    int b = 1;
    cout<<a<<" "<<b<<" ";
    int next_num;

    while( a+b<=n)
    {
        next_num = a+b;
        cout<<next_num<<" ";
        a=b;
        b=next_num;
    }
    return 0;
}

int main()
{
 int n;
 cin>>n;
 fib(n);
 return 0;
}