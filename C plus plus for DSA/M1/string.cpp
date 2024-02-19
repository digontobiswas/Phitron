/*
Digonto

for cin.getline like fgets he can take string with space
so i can give input digonto biswas
*/
#include <iostream>
#include <string> //for some special in cpp string but for maximum work need to include <string.h> without string.h string length and more function will not work
#include <string.h>
using namespace std;
int main()
{   
    int a;
    cin>>a;
    getchar(); //it's give afer showing auto enter input
    char s[100];
    //cin>>s;
    // cout<<s<<endl;
    // cout<< strlen(s);
   // fgets(s,100,stdin);
   // cout<<s;
   cin.getline(s,100);
   
   cout<<a<<endl;
   cout<<s<<endl;
   //here show print 3 line but without string becuase of here after input int value auto take a enter as input so for ignore the enter we can use a function that is getchar() after input integer

}