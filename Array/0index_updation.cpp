#include <iostream>
using namespace std;

void updation(int numbers[]){
    cout<<endl<<"Inside the function"<<endl;

numbers[0]=120;
for(int i =0; i<3;i++){
        cout<<numbers[i]<<" ";
}
    cout<<endl<<"Going back to main function"<<endl;
}

int main(int argc, char const *argv[])
{
    int numbers[3]= {1,2,3};

    updation(numbers);
    for(int i =0; i<3;i++){
        cout<<numbers[i]<<" ";
    }
    return 0;
}
