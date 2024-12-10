#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> test =  {1,2,3,4,5};
// ________________Deletion________________


    //If i want to remove a particular digit from a particular index i use this

    // This is use to erase the first i.e 0 index value 
    test.erase(test.begin());
    // To remove something at other index we use +
    // this will remove element from index 3
    test.erase(test.begin()+3);

    for(int values : test){
        cout<<values<<" ";
    }

    cout<<endl;


    // ________________Insertion________________

    vector<int> test2 =  {1,2,3,4,5};
	// buy using this we will be able to insert a element before index 2
    test2.insert(test2.begin()+2,6);
    
    for(int values1 : test2){
        cout<<values1<<" ";
    }
    return 0;
}
