/*
                  
                  
*/
#include <bits/stdc++.h>
using namespace std;
         
         
int main()
{

     vector<int> x={10,20,30};
     vector<int> v={1,2,3};
     v=x;  //O(1) time complexsity
    
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    v.pop_back(); //last index delete

    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    
    cout<<endl;
    v.pop_back(); //last index delete

    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }

    return 0;
}