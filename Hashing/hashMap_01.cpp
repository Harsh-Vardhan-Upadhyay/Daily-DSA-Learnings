#include <iostream> 
#include <map>
using namespace std;


int main(int argc, char const *argv[])
{
    int size;
    cin>> size;
    int arr[size];
    map<int,int>mpp;

    for(int i = 0; i<size; i++){
        cin>> arr[i];
        mpp[arr[i]]++;
    }


    int testNumber;
    cin>> testNumber;
    cout<<mpp[testNumber];

    return 0;
}
