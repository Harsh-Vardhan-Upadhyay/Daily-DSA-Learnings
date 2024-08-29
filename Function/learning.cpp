// // This program helps you calculate the power of a number given 

// #include <iostream>
// using namespace std;

// int main(int argc, char const *argv[])
// {
// int number;
// int power;
// int answer;

// cin>>number>>power;

// for(int i =1;i<=power;i++)
// {
//     answer = answer * number;
// }
//     cout<<answer;
//     return 0;
// }



// Doing the same using functions


#include <iostream>
using namespace std;

int power()
{
    int number;
    int power;

    cin >>number>>power;
    int ans = 1;

    for(int i = 1; i<=power; i++)
{
    ans = ans * number;
}


return ans;

}

int main()
{
    

   int  answer = power();
    cout <<answer;

    return 0;
}