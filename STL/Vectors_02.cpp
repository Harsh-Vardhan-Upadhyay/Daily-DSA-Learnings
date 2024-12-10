#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> vec = {1,2,3,4,5};
    for(int values : vec){
        cout<<values<<" ";
    }
    cout<<endl;


    // If we want to create a vector that of a particular size and fill the vector with same value i would use this
    vector<int>fill(10,1);
    for(int values : fill){
        cout<<values<<" ";
    }
    cout<<endl;

    return 0;
    
}
