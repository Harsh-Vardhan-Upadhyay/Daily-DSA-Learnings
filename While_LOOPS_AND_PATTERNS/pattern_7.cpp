#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin>>n;

    int i =1;
    char k ='a';

    while (i<=n)
    {
        int j = 1;
        while (j<=n)
        {

            cout << k ;
            k= k+1;
            j=j+1;

        }
        cout <<endl;
        i =i+1;
        
    }
    
    return 0;
}
