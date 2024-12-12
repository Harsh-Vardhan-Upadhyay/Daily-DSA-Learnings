#include <iostream>
#include <map>
using namespace std;

int main(int argc, char const *argv[])
{
    // To add data inside a map we use this 
    map<string,int> m;
    m["TV"] = 100;
    m["Computer"] = 300;
    m["Phone"] = 200;

    m.insert({"PC",400});
    m.emplace("CD",400);

// This is used to remove a particular key from the map
    m.erase("TV");
    

//This is how we print them we get the items in sorted assending order of the alphabet (keys are the one to be sorted on the values)
    for(auto value : m){
        cout<<value.first<<" "<<value.second<<endl;
    }
    cout<<endl;

//We use count to find the number of times we have used a particular key
    cout<<"count = " <<m.count("Computer")<<endl;
        // We can use this to just print the value of a particular key
    cout<<"count = " << m["Computer"]<<endl;



    return 0;
}
 