#include <iostream>
#include <string>
using namespace std;

int main() {
    string line;

    cout << "Enter a line: ";
    getline(cin, line);

    cout << "Number of characters: " << line.length() << endl;

    return 0;
}