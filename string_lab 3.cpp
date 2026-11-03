#include <iostream>
#include <string>
using namespace std;

int main() {
    string line;

    cout << "Enter a line: ";
    getline(cin, line);

    cout << "Reversed: ";
    for (int i = static_cast<int>(line.length()); i > 0; --i) {
        cout << line[i - 1];
    }
    cout << endl;

    return 0;
}