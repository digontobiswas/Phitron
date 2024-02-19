/*
                  
        5
5 1 4 10 5           
*/
#include <bits/stdc++.h>
using namespace std;
         
         
int main()
{

     vector <int> v;
     int n;
     cin>>n;

     //normal array input but this type is not work becuase when we initial the vector then vector size is zero;
    //  for (int i = 0; i < n; i++)
    //  {
    //     cin>>v[i];
    //  }
    //tested this is not worked

    //solution //1st value ta input nibo then push_back kore vector e diye dibo
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    

    } //this is worked

    //for show output
    for(int value:v)
    {
        cout<<value<<" ";
    }


    
    

    

     
     
     

    return 0;
}