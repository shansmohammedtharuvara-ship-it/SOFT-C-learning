#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
    string line;

    cout << "Enter a line: ";
    getline(cin, line);

    stringstream words(line);
    string word;
    int count = 0;

    while (words >> word) {
        count++;
    }

    cout << "Number of words: " << count << endl;

    return 0;
}