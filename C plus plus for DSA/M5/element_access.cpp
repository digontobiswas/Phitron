/*
                  
                  
*/
#include <bits/stdc++.h>
using namespace std;
         
         
int main()
{

     string s;
     cin>>s;
     cout<<s[0]<<endl;
     cout<<s.at(0)<<endl; //by using function
    cout<<s[s.size()-1]<<endl;
    cout<<s.back()<<endl; //by using function
    cout<<s.front()<<endl; //by using function
    
    return 0;
}