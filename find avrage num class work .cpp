#include <iostream>
using namespace std;

int main()
 {
    int n;
    cout << "How many numbers? ";
    cin >> n;

    int arr[100];

    cout << "Enter " << n << " numbers:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";

    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum = sum + arr[i];
    }

    double average = (double)sum / n;

    cout << "Sum: " << sum << "\n";
    cout << "Average: " << average << "\n";

    return 0;
}