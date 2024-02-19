/*
    5
    20 30 10 50 40              
                  
*/
#include <bits/stdc++.h>
using namespace std;
         
         
int main()
{

     int n;
     cin>>n;
     int ar[n];
     
     for (int i = 0; i < n; i++)
     {
        cin>>ar[i];
     }
     //assending order
    // sort(ar, ar+(n)); //n-1 mane index 4 porjonto sort korbe amar index o ace 4 porjonto
//sort decending order
    sort(ar, ar+(n), greater<int>());
     for (int i = 0; i < n; i++)
     {
        cout<<ar[i]<<" ";
     }
     

    return 0;
}