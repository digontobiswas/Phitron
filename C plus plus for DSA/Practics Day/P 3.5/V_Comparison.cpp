/*
                  
                  
*/
#include <bits/stdc++.h>
using namespace std;
         
         
int main()
{

      int a, b;
     char c;
     cin>>a;
     cin>>c;
     cin>>b;
     
       bool result;
    if (c=='<')
       {
        result = a<b;
       }
    else if (c == '>') {
        result = a > b;
    }
    else { 
        result = a == b;
    }

    if (result) {
        cout<< "Right" << std::endl;
    } else {
        cout<< "Wrong" << std::endl;
    }
       

    return 0;
}