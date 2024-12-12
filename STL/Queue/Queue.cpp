#include <iostream>
#include <queue>
using namespace std;

int main(int argc, char const *argv[])
{
    queue<int>s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);

    cout<<s.front()<<endl;


    while(!s.empty()){
        cout<<s.front()<<" ";
        s.pop();
    }
    return 0;
}
