#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int amount;
    cin>>amount;

    int num = 1;
    int notes;

    switch (num)
    {
    case 1 : {
        notes = amount/100;
        amount = amount - (100*notes);
        cout<<notes<<"of 100"<<endl;


    }
    case 2: {
         notes = amount/50;
        amount = amount - (50*notes);
        cout<<notes<<"of 50"<<endl;
    }
        
     case 3: {
         notes = amount/20;
        amount = amount - (20*notes);
        cout<<notes<<"of 20"<<endl;
    }
     case 4: {
         notes = amount/10;
        amount = amount - (10*notes);
        cout<<notes<<"of 10"<<endl;
    }
    
    }
    return 0;
}
