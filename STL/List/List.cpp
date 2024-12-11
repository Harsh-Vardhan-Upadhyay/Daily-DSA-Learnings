#include <iostream>
#include <vector>
#include <list>
using namespace std;

int main(int argc, char const *argv[])
{
    list<int> l ;

    l.push_back(1);
    l.push_back(2);
    l.push_front(2);
    for(int values : l){
        cout<<values<<" ";
    }
    cout<<endl;

    return 0;
    
}
