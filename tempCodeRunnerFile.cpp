#include <iostream>
using namespace std;
 int main() { 
     double a,b;
     char op;
     cout<<"Enter number op number\n";
     cin>>a>>op>>b;

     swith (op) {
         case'+':cout<<a+b<<break;
         case'-':cout<<a-b<<break;
         case'*':cout<<a*b<<break;
         case'/':
             if(b==0)
                 cout<<"cannot divid by Zero"
                     else
                 cout<<a/b<<break;

         default:
              cout<<"Error";
                     
     }
     
 