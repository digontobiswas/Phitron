/*
Isani_Roy            
                  
*/
#include <bits/stdc++.h>
using namespace std;
         
         
int main()
{

     string s = "hello";
    cout<<s.size()<<endl;
    cout<<s.max_size()<<endl;
    cout<<s.capacity()<<endl;
    s="aaaaaaaaaaaaaaaaaaaaaaaaaa";  //dainamically increase
    cout<<s.capacity()<<endl;
    cout<<s<<endl;
    s.clear();
    cout<<s<<endl;
    cout<<s.size()<<endl;
    string a  = "Digonto";
    if(a.empty()==true) cout<<"empty";
    else cout<<"Not empty"<<endl;
    string i;
    cin>>i;
    cout<<i.size()<<endl;
    cout<<i<<endl;
    i.resize(15, 'D');
    cout<<i;


    return 0;
}