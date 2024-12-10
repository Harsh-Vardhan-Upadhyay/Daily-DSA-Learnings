#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.pop_back();


    for (int i : vec){
        cout<<i<<" ";
    }
    cout<<endl;
// In order to print a value of a vector at a particular index we can use 
//either vec.at() or vec[]

cout<<"Value at index 0 "<<vec[0]<<" or "<<vec.at(0)<<endl;

    cout << vec.size() <<endl;
    cout<< vec.capacity() <<endl;
    return 0;
}