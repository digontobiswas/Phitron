/*
input
10 20000000000000000 D
*/

#include <iostream>
using namespace std;
int main()
{
    int a;
    long long int b;
//    std:: cin>>a;
//    std:: cout<<a;

//for ignore overwrite std:: i can say that this is under std group top of the main function 
// using namespace std;

       cin>>a  >> b;
       cout<<a<<" "<< b <<endl;
       char c;
       cin>>c;
    //    cout<<c <<endl;

       //for ascii value
    //    int ascii =c;
    //    cout<<ascii;  //output D=68
       
    //    Another way
      cout<<int(c);
    
}