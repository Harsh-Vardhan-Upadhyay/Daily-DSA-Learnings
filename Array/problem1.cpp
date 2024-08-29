#include <iostream>
using namespace std;

int maxNumber (int num[],int size){
    int max = INT_MIN;

    for (int i = 0; i < size; i++)
    {
        if(num[i]>max){
            max=num[i];
        }
    }
    return max;
}

int minNumber (int num[],int size){
    int min = INT_MAX;

    for (int i = 0; i < size; i++)
    {
        if(num[i]<min){
            min=num[i];
        }
    }
    return min;
}


int main(int argc, char const *argv[])
{
    int size;
    cin>>size;

    int num[100];

    for(int i =0;i<size;i++)
    {
        cin>>num[i];
    }

    cout<<maxNumber(num,size);
     cout<<minNumber(num,size);
    return 0;
}
