#include <iostream>
using namespace std;

int main() {
    int arr[100];
    int n;

    cout << "How many numbers? ";
    cin >> n;

    cout << "Enter " << n << " numbers: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "You entered: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";

    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    cout << "Sum: " << sum << "\n";
    cout << "Average: " << double(sum) / n << "\n";

    int maximum = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > maximum) {
            maximum = arr[i];
        }
    }
    cout << "Maximum: " << maximum << "\n";

    int minimum = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < minimum) {
            minimum = arr[i];
        }
    }
    cout << "Minimum: " << minimum << "\n";

    int evenCount = 0;
    int oddCount = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }
    cout << "Even: " << evenCount << "\n";
    cout << "Odd: " << oddCount << "\n";

    cout << "Reversed: ";
    for (int i = n - 1; i >= 0; i--) {
        cout << arr[i] << " ";
    }
    cout << "\n";

    // Search (from last time)
    int target;
    cout << "Enter a value to search for: ";
    cin >> target;

    int foundIndex = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            foundIndex = i;
            break;
        }
    }

    if (foundIndex == -1) {
        cout << "Value not found.\n";
    } else {
        cout << "Found at index " << foundIndex << "\n";
    }

    // NEW: count how many times a value appears
    int target2;
    cout << "Enter a value to count: ";
    cin >> target2;

    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == target2) {
            count++;               // one more match
        }
    }
    cout << "It appears " << count << " time(s).\n";

    return 0;
}