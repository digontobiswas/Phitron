/*
                  
                  
*/
#include <bits/stdc++.h>
using namespace std;
         
         
int main()
{

     string s;
     cin>>s;
     for (int i = 0; i < s.size(); i++)
     {
        cout<<s[i]<<endl;
     }
    cout<<endl;
    cout<<endl;
     //iterator is like a pointer
     cout<<*s.begin()<<endl;   //iterator is pointer so dereferance kore dile value paoya jabe
     cout<<*(s.end()-1)<<endl;
       
     //pointer k jodi iterator korte chai taile iterator lagbe like 
     //i er loop diye ek ek ghor samne gechi mane iterate korchi so pointer er somy i diye hobe na
     //ex bleow

     cout<<endl;
     string a;
     string:: iterator it;
     cin>>a;

    for ( it=a.begin(); it<a.end(); it++)
    {
        cout<<*it<<endl;
    }

    cout<<endl;

    //iterator can declare inside for loop and work same
    string b;
    cin>>b;
    for (string::iterator ite=b.begin(); ite < b.end(); ite++)
    {
        cout<<*ite<<endl;
    }

    //by write auto string and cpp can understant it is a iterator
    string c;
    cin>>c;
    for (auto  i=c.begin(); i < c.end(); i++)
    {
        cout<<*i<<endl;
    }
    
    



     

    return 0;
}