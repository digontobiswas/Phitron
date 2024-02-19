/*
                  
                  
*/
#include <bits/stdc++.h>
using namespace std;
         
         
int main()
{

     vector<int> v;
     
    
     v.push_back(10);  
     
     v.push_back(20);  
     
     v.push_back(30);  
   
    v.push_back(40);
  
    v.push_back(50);
   
    

    //v.clear()  //Clears the vector elements. Do not delete the memory, only clear the value.
    v.clear();
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i];
    }
    cout<<v[0];

    //size zero but internal value ace tai value output dibe
    return 0;
}