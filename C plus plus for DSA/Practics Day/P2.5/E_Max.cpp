#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int mx = INT_MIN;
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin>>ar[i];
    }
    for (int i = 0; i < n; i++)
    {
        mx= max(mx,ar[i]);
    }

    cout<<mx;
    

    
  return 0;
}