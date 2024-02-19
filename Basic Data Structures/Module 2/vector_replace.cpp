/*
                  
                  
*/
#include <bits/stdc++.h>
using namespace std;
         
         
int main()
{

     vector<int > v={1,2,2,2,2,2,3,4,4,4,4,4,5,6,7,8,9};
   // replace(v.begin(),v.end(),2,100); //replace everywhare program get 2 inside this vector

    for(int x:v)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    replace(v.begin(),v.begin()+3,2,100); //replace only specific position 2
    for(int x:v)
    {
        cout<<x<<" ";
    }


    return 0;
}