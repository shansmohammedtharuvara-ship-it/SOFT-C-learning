#include <iostream>

using namespace std;



int main() {

    int a;

    int b;

    int c;

    cout<<"Enter the first integer =";

    cin>>a;

    cout<<"Enter the second integer =";

    cin>>b;

    cout<<"Enter the third integer =";

    cin>>c;

    if (a>b&&a>c)

    cout<<"First integer is greater than the other integers.";

    else if(b>a&&b>c)

            cout<<"Second integer is greater than the other integers.";

                
            
    else if (c>a && c>b)

            cout<<"Third integers is greter than the other integers";
            
    else
       cout<<"all integers are equal";

    return 0;
}

                

