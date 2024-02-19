/*
                  
                  
*/
#include <bits/stdc++.h>
using namespace std;
         
         
int main()
{

     int test;
     cin>>test;
     
     for (int i = 0; i < test; i++)
     {
        
        int n;
        int mn= INT_MAX;
        cin>>n;
        int ar[n];
        for (int i = 0; i < n; i++)
        {
            cin>>ar[i];
        }

        // for (int i = 0; i < n; i++)
        // {
        //     cout<<ar[i]<<" "<<endl;
        // }

        int result =0;
        for (int i = 0; i < n-1; i++)
        {
            for (int j = i+1; j < n; j++)
            {
                result =ar[i]+ar[j]+j-i;
                //cout<<result<<" ";
                mn = min(result, mn);
                
            }
           
            
        }
        
        cout<<mn;


     }
     

 return 0;
}