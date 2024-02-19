/*
                  
                  
*/
#include <bits/stdc++.h>
using namespace std;
         
         
int main()
{

     vector <int> v={1,2,3,4,5};
     //last element access
     cout<<v[v.size()-1]<<endl;
     cout<<v.back()<<endl;


     //1st ellement acess
     cout<<v[0]<<endl;  //by index we can access all element here 0 is 1st index so 1st element access
     cout<<v.front()<<endl;

     for(auto it=v.begin();it<v.end();it++)
     {
        cout<<*it<<" ";
     }



    return 0;
}