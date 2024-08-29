#include <iostream>
using namespace std;


int printer(int n)
{
n++;

return n;
}
int main()
{

int n;
cin>>n;


cout<<"the number you have entered is "<<n<<endl;
cout<<"The increased value is "<<printer(n)<<endl;


    return 0;
}