/*
                  
                  
*/
#include <bits/stdc++.h>
using namespace std;
         
         
int main()
{

     int n,q;
     cin>>n>>q;
     int ar[n];
     for (int i = 0; i < n; i++)
     {
        cin>>ar[i];
     }
     
     
    for (int i = 0; i < q; i++)
    {   int sum=0;
        int l,r;
        cin>>l>>r;
        for (int i = l-1; i <= r-1; i++)
        {
            sum+=ar[i];
        }
        
        cout<<sum<<endl;
        
    }
    
     

    return 0;
}