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

        if(x==0)
        {
            x=0;
            v.push_back(x);
        }

        else if(x>0)
        {
            x=1;
            v.push_back(x);
        }

        else
        {
            x=2;
            v.push_back(x);
        }

     }


     for(int x:v)
        {
            cout<<x<<" ";
        }
     

    return 0;
}