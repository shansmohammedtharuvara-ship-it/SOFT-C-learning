// Program to take student details and calculate mark percentage out of 500
#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    int age;
    double marks;

    // Read user inputs
    cout << "Enter your name: ";
    cin >> name;

    cout << "Enter your age: ";
    cin >> age;

    cout << "Enter your marks: ";
    cin >> marks;

    // Display student information
    cout << "My name is: " << name << endl;
    cout << "My age is : " << age << endl;
    cout << "My marks are: " << marks << endl;

    // Calculate and print percentage (assuming total marks = 500)
    double percentage = (marks / 500.0) * 100;
    cout << "Percentage: " << percentage << "%" << endl;

    return 0;
}
