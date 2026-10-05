#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "Enter your age: ";
    cin >> age;

    bool hasTicket = true; 
    if (age >= 18) {
        if (hasTicket) {
            cout << "You have a ticket." << endl;
            cout << "Entry allowed." << endl;
        } else {
            cout << "You don't have a ticket." << endl;
            cout << "Buy a ticket first." << endl;
        }
    } else {
        cout << "You are not eligible by age." << endl;
    }

    return 0;
}

