#include <iostream>
using namespace std;

int main() {

    int a;
    int b;

    cout<<"Enter the first integer=";
    cin>>a;
    
    cout<<"Enter thr second integer=";
    cin >>b;

    if(a>b)
    cout<<"First integer is greater that the other.";

    else if(b>a)
    cout<<"Second integer is greater than the other.";

    else 
    cout<<"Both are equal";

    return 0;


}
