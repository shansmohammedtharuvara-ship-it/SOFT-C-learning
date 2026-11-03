#include <iostream>
#include <string>
using namespace std;

int main() {
    string first, second;

    cout << "Enter the first string: ";
    getline(cin, first);

    cout << "Enter the second string: ";
    getline(cin, second);

    if (first == second) {
        cout << "Strings match" << endl;
    } else {
        cout << "Strings do not match" << endl;
    }

    return 0;
}
