/*
                  
                  
*/
#include <bits/stdc++.h>
using namespace std;
         
         
int main()
{

     vector<int> v={1,2,3,4,5,1,2,3,4,5,1,2,3,4,5};
    
     auto it =  find(v.begin(),v.end(),3);
     cout<<*it;


    return 0;
}