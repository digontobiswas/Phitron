/*
       total 4 type here           
                  
*/
#include <bits/stdc++.h>
using namespace std;
         
         
int main()
{

     vector<int> v;  //type 1 vector initialization
     cout<<v.size()<<endl;

     vector <int> f={1,2,3,4,5};  //dynamic array so no need to say size, it automatic put size that he need
     for (int i = 0; i < f.size(); i++)
     {
        cout<<f[i]<<" ";
     }
     cout<<endl;

    //type 2
     vector<int> e(5);
     cout<<e.size()<<endl;
     //value print

     for (int i = 0; i < v.size(); i++)
     {
        //cout<<i<<endl;
        cout<<v[i];  //value print
    

     }
     cout<<endl;


    //type 3
     vector<int>b(5,10);  //10 is here vector value for every index of this b vector
     for (int i = 0; i < b.size(); i++)
     {
        cout<<b[i]<<" ";
     }
     
     cout<<endl;

     //type 4
     vector <int>c(b);  //copy all element from vector b;
     for (int i = 0; i < b.size(); i++)
     {
        cout<<c[i]<<" ";
     }

    cout<<endl;

    //type 5
    int a[6]={1,2,3,4,5};
    vector<int> d(a,a+6);  //copy a arry by vactor need to give perameter inside the vector that is start pointer and end pointer
    for (int i = 0; i < b.size(); i++)
     {
        cout<<d[i]<<" ";
     }
     

    return 0;
}