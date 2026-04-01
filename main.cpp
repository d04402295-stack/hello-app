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

        for (int i = 1; i < argc; i++) {
            names.push_back(argv[i]);
        }

        for (string name : names) {
            result += name + ", ";
        }

        result = result.substr(0, result.length() - 2);

        cout << result << endl;
    }

    return 0;
}