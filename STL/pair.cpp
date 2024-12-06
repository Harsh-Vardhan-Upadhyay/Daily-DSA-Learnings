#include <iostream>
using namespace std;

int main() {
    pair<int, int> p(1, 3);  
    cout << "(" << p.first << ", " << p.second << ")" << endl;

    pair<int, pair<int, int> > s(1, make_pair(2, 3));
    cout << "(" << s.first << ", (" << s.second.first << ", " << s.second.second << "))" << endl;

    pair<int, int> arr[] = {make_pair(1, 2), make_pair(3, 4)};
    cout << "(" << arr[1].first << ", " << arr[1].second << ")" << endl;

    return 0;
}