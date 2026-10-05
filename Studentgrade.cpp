#include <iostream>
#include <string>

using namespace std;

int main() {

    string StudentName;
    int StudentMarks;

    cout << "Enter StudentName= ";
    cin >> StudentName;

    cout << "Enter StudentMarks= ";
    cin >> StudentMarks;

    if (StudentMarks >= 90)
        cout << StudentName <<" and his grade is  Grade A";

    else if (StudentMarks >= 80)
        cout << StudentName <<" and his grade is  Grade B";

    else if (StudentMarks >= 70)
        cout << StudentName <<" and his grade is  Grade C";

    else if (StudentMarks >= 60)
        cout << StudentName <<" and his grade is  Grade D";

    else 
        cout << StudentName <<" and he has failed";
    return 0;
} 