#include <iostream>
#include <stack>
using namespace std;

int main(int argc, char const *argv[])
{
    stack<int>s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);

    cout<<s.top()<<endl;


    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
}
