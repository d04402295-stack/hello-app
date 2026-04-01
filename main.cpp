#include <iostream>
using namespace std;

int main(int argc, char* argv[]) {

    if (argc == 1) {
        cout << "Hello World" << endl;
    } 
    else {
        cout << "Hello ";
        for (int i = 1; i < argc; i++) {
            cout << argv[i];
            if (i < argc - 1) {
                cout << ", ";
            }
        }
        cout << endl;
    }

    return 0;
}