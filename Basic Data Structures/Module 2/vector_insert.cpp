/*
                  
                  
*/
#include <bits/stdc++.h>
using namespace std;
         
         
int main()
{

     vector<int> v={10,30,40};
     for(int x:v)  //range base for loop
     {
        cout<<x<< " ";
     }
     v.insert(v.begin()+1,20);  //value add single in specific poisition

    cout<<endl;

    for (int x :v)
    {
        cout<<x<< " ";
    }

    cout<<endl;
    vector<int> v2 ={100,200,300};
    v.insert(v.begin()+4,v2.begin(),v2.end()); //multiple value add korte hole onno vectror e 1st rakhte hobe sathe vector er suru er pointer and ses pointer diye dite hobe

    for (int x:v )
    {
        cout<<x<<" ";
    }
    
    
    return 0;
}