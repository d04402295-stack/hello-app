#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char* argv[]) {

    if (argc == 1) {
        cout << "Hello, World!" << endl;
    } 
    else {
        cout << "Hello ";

        vector<string> names;

        // Store arguments into vector
        for (int i = 1; i < argc; i++) {
            names.push_back(argv[i]);
        }

        // Enhanced for loop
        bool first = true;
        for (string name : names) {
            if (!first) {
                cout << ", ";
            }
            cout << name;
            first = false;
        }

        cout << endl;
    }

    return 0;
}