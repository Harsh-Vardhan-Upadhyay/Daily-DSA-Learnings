#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    unordered_map<string, int> marks; // Unordered map with string keys and int values

    // Adding key-value pairs
    marks["Alice"] = 90;
    marks["Bob"] = 85;
    marks["Charlie"] = 88;

    // Accessing values
    cout << "Alice's marks: " << marks["Alice"] << std::endl;

    // Iterating through the unordered map
    for (auto pair : marks) {
        cout << pair.first << " got " << pair.second << " marks." << endl;
    }

    return 0;
}