/*
                  
                  
*/
#include <bits/stdc++.h>
using namespace std;
         
         
int main()
{

     vector<int> v;
     int n;
     cin>>n;
     for (int i = 0; i < n; i++)
     {
        int x;
        cin>>x;
        v.push_back(x);
     }

     vector<int> v2;
     for (int i = 0; i < n; i++)
     {
        int x;
        cin>>x;
        v2.push_back(x);
     }

     vector <int> c(v2);
     for (int i = 0; i < n; i++)
     {
        c.push_back(v[i]);
     }
     

     for(int final:c)
     {
        cout<<final<<" ";
     }
     
     

    return 0;
}