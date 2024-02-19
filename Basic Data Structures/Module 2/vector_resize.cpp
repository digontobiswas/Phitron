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
    
   for (int i = 0; i < v.size(); i++)
   {
        cout<<v[i]<<" ";
   }
   cout<<endl;
   
   //vector resize
   v.resize(2);
    for (int i = 0; i < v.size(); i++)
   {
        cout<<v[i]<<" ";  //output resize 2
   }
   cout<<endl;
   

   v.resize(7);
   
for (int i = 0; i < v.size(); i++)
   {
        cout<<v[i]<<" ";  //output resize 7 but after size 2 memory clear so gurabge value output
   }
   cout<<endl;

    return 0;
}