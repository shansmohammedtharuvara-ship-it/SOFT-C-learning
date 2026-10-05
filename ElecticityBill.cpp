#include <iostream>
using namespace std;

int main() {

    int units;
    double bill;
    double dollar_Bill;

    cout << "Enter units: ";
    cin >> units;

    if (units <= 100)
        bill = units * 5;
    else if (units <= 200)
        bill = (100 * 5) + (units - 100) * 7;
    else
        bill = (100 * 5) + (100 * 7) + (units - 200) * 10;

    dollar_Bill = bill / 83;

    cout<<"Total bill = Rs "<< bill<<std::endl;
    cout << "Total bill = $" << dollar_Bill;

    return 0;
}