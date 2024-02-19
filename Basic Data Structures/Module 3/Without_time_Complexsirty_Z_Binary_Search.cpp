/*
                  
                  
*/
#include <bits/stdc++.h>
using namespace std;
         
         
int main()
{

     long long int n,q;
     cin>>n>>q;
     long long int ar[n];
     for (int i = 0; i < n; i++)
     {
        cin>>ar[i];
     }

     while (q--)
     {
        long long int x;
        cin>>x;
        bool flag=false;
        for (int i = 0; i < n; i++)
        {
            if(ar[i]==x)
            {
                flag=true;
                break;
            }
        }

        if (flag==true)
        {
            cout<<"found"<<endl;
        }
        else
        {
            cout<<"not found"<<endl;
        }
        
        
     }
     
     

    return 0;
}