#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "How many numbers? ";
    cin >> n;

    int arr[100];

    cout << "Enter " << n << " numbers:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Elements:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";

    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum = sum + arr[i];
    }
    cout << "Sum: " << sum << "\n";

    int maximum = arr[0];
    int minimum = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > maximum) {
            maximum = arr[i];
        }
        if (arr[i] < minimum) {
            minimum = arr[i];
        }
    }

    cout << "Maximum: " << maximum << "\n";
    cout << "Minimum: " << minimum << "\n";

    return 0;
}