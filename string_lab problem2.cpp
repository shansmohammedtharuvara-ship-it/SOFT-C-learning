#include <iostream>
#include <string>
using namespace std;

int main() {
    string line;

    cout << "Enter a line: ";
    getline(cin, line);

    int vowelCount = 0;

    for (char ch : line) {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            vowelCount++;
        }
    }

    cout << "Number of vowels: " << vowelCount << endl;

    return 0;
}