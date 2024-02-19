/*
 5 10 30 
*/

#include <iostream>
#include <iomanip>
#include <algorithm>

using namespace std;
int main()
{
     int a, b,x;
     cin>>a>>b>>x;
   //   if (a<b)
   //   {
   //      cout<<a;
   //   }
   //   else
   //   {
   //      cout<<b;
   //   }

    int c = min(a,b);
    int d= max({a,b,x});
    cout<<"Min is="<<c<<endl;
    cout<<"Max is ="<<d<<endl;

    
     


    return 0;
}