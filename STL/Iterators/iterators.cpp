#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> test = {1,2,3,4,5,6};

    vector<int>::iterator i;
    vector<int>::reverse_iterator j; // We can use this or just use auto 

    // This is used to run a forward loop
    for(i = test.begin(); i != test.end(); i++){
        cout<< *(i) << " "; 
    }
    cout<<endl;

    // This is used to run a backword loop
    for(auto j = test.rbegin(); j!=test.rend(); j++){
        cout<< *(j) << " "; 
    }
    cout<<endl;
    return 0;
}
