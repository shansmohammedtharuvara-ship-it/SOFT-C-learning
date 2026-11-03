#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string line;

    cout << "Enter a word: ";
    getline(cin, line);

    bool isPalindrome = true;
    int left = 0;
    int right = static_cast<int>(line.length()) - 1;

    while (left < right) {
        char first = static_cast<char>(
            tolower(static_cast<unsigned char>(line[left]))
        );
        char last = static_cast<char>(
            tolower(static_cast<unsigned char>(line[right]))
        );

        if (first != last) {
            isPalindrome = false;
            break;
        }

        left++;
        right--;
    }

    if (isPalindrome) {
        cout << "Palindrome" << endl;
    } else {
        cout << "Not a palindrome" << endl;
    }

    return 0;
}