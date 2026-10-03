#include <iostream>
using namespace std;

int main()
{
	int a;
    cout<<"Enter a number : ";
	cin>>a;
    cout<<"Multiplication table of "<<a<<" is. "<< endl;
	
    for (int i = 1; i <= 10; i++ )
    {
        cout << i << " x " << a << " = " << i * a << endl;
    }

    return 0;
}

