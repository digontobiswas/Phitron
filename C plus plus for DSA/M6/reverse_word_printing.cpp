/*
       I am Digonto Biswas a software devloper and researcher
           
                  
*/
#include <bits/stdc++.h>
using namespace std;
void rprint(stringstream& ss)  //check why use & reference.cpp. Its mainly use for reference 
{
    string world;
    if(ss>>world)
    {
        // cout<<world<<endl;
        // rprint(ss);

        //recersive er age print na kore pore korlei to reverce print hobe
        rprint(ss);
        cout<<world<<endl;
        
    }
}
         
int main()
{
    string s;
    getline(cin, s);
    stringstream ss(s);
    string word;

    // while (ss>>word)
    // {
    //     cout<<word<<endl;
    // }

    //this upper work done by function so underline i call function rprint
    rprint(ss);
    
     

    return 0;
}