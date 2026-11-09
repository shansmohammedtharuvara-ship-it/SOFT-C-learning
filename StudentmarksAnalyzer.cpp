#include <iostream>
using namespace std;

const int PASS_MARK = 40;

void enterMarks(int marks[], int numberOfStudents) {
    for (int i = 0; i < numberOfStudents; i++) {
        cout << "Enter mark for student " << i + 1 << ": ";
        cin >> marks[i];
    }
}

int findTotal(int marks[], int numberOfStudents) {
    int total = 0;

    for (int i = 0; i < numberOfStudents; i++) {
        total = total + marks[i];
    }

    return total;
}

int findHighest(int marks[], int numberOfStudents) {
    int highest = marks[0];

    for (int i = 1; i < numberOfStudents; i++) {
        if (marks[i] > highest) {
            highest = marks[i];
        }
    }

    return highest;
}

int findLowest(int marks[], int numberOfStudents) {
    int lowest = marks[0];

    for (int i = 1; i < numberOfStudents; i++) {
        if (marks[i] < lowest) {
            lowest = marks[i];
        }
    }

    return lowest;
}

int countPassed(int marks[], int numberOfStudents) {
    int passed = 0;

    for (int i = 0; i < numberOfStudents; i++) {
        if (marks[i] >= PASS_MARK) {
            passed++;
        }
    }

    return passed;
}

int main() {
    char again;

    do {
        int numberOfStudents;

        cout << "How many students? Enter a number from 1 to 100: ";
        cin >> numberOfStudents;

        while (numberOfStudents < 1 || numberOfStudents > 100) {
            cout << "Invalid number. Enter a number from 1 to 100: ";
            cin >> numberOfStudents;
        }

        int* marks = new int[numberOfStudents];

        enterMarks(marks, numberOfStudents);

        int total = findTotal(marks, numberOfStudents);
        double average = (double)total / numberOfStudents;
        int highest = findHighest(marks, numberOfStudents);
        int lowest = findLowest(marks, numberOfStudents);
        int passed = countPassed(marks, numberOfStudents);
        int failed = numberOfStudents - passed;

        cout << "\n--- Student Marks Results ---\n";
        cout << "Total: " << total << '\n';
        cout << "Average: " << average << '\n';
        cout << "Highest mark: " << highest << '\n';
        cout << "Lowest mark: " << lowest << '\n';
        cout << "Passed: " << passed << '\n';
        cout << "Failed: " << failed << '\n';

        delete[] marks;

        cout << "\nRun the analysis again? (y/n): ";
        cin >> again;

    } while (again == 'y' || again == 'Y');

    return 0;
}
