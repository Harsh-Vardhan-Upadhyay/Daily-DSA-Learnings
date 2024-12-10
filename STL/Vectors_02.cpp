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
    return 0;
}
