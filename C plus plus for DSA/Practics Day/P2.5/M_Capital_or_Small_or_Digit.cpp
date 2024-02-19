#include <bits/stdc++.h>
using namespace std;
int main()
{
    char a;
    cin>>a;
    int b = a;
if ('A'<=b && b<='Z' || 'a'<=b && 'z'>=b)
{
    cout<<"ALPHA"<<endl;
    if (b>='A' && b<='Z')
    {
        cout<<"IS CAPITAL"<<endl;
    }
    else
    {
        cout<<"IS SMALL"<<endl;
    }
    
}
else
{
    cout<<"IS DIGIT"<<endl;
}
    
  return 0;
}