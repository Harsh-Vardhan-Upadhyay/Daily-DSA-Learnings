#include <iostream>
using namespace std;
void swap(int arr[], int size)
{
    for (int i = 0; i < size; i = i + 2)
    {

        if (i + 1 < size)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
}

void printer(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(int argc, char const *argv[])
{
    int arr[7] = {1, 2, 3, 4, 5, 6, 8};
    int size = 7;
    swap(arr, size);
    printer(arr, size);
    return 0;
}
