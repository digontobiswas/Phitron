/*
5
 Sakib Khan
 Rakib Khan
 Tanim Ahmed
 Sowad Mohamad
 Arko Biswas                 
                  
*/
#include <bits/stdc++.h>
using namespace std;
         
         
int main()
{
     // myway
    /*
  
    vector <string> v;
    int n;
    cin>>n;
    cin.ignore();

     for (int i = 0; i < 5; i++)
     {
        string s;
        getline(cin,s);
        v.push_back(s);

     }
     for( string full_name:v)
     {
        cout<<full_name<<endl;
     }

     */

    //sir way
    int n;
    cin>>n;
    cin.ignore();
    vector<string> v(n);
   for (int i = 0; i < n; i++)
   {
        getline(cin, v[i]);
   }
   
    for(string full_name:v)
    {
        cout<<full_name<<endl;
    }

    return 0;
}