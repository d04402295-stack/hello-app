#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char* argv[]) {

    if (argc == 1) {
        cout << "Hello, World!" << endl;
    } 
    else {
        string result = "Hello ";

        vector<string> names;

        // Store arguments
        for (int i = 1; i < argc; i++) {
            names.push_back(argv[i]);
        }

        // Enhanced for loop + add comma
        for (string name : names) {
            result += name + ", ";
        }

        // Remove last ", " using substring
        result = result.substr(0, result.length() - 2);

        cout << result << endl;
    }

    return 0;
}