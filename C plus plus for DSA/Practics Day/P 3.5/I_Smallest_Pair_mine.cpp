/*
                  
                  
*/
#include <bits/stdc++.h>
using namespace std;
         
         
int main()
{

    //  int test;
    //  cin>>test;
     
    //  for (int i = 0; i < test; i++)
    //  {
        
        int n;
        int mn;
        cin>>n;
        int ar[n];
        for (int i = 0; i < n; i++)
        {
            cin>>ar[i];
        }

        int result;
        for (int i = 0; i < n; i++)
        {
            for (int j = i+1; j < n-1; j++)
            {
                result =ar[i]+ar[j]+i+j;
                
            }
           
             mn =min(INT_MAX, result);
        }
        
        cout<<mn;


     //}
     

    return 0;
}