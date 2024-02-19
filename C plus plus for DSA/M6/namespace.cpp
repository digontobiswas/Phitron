/*
                  
                  
*/
#include <bits/stdc++.h>
using namespace std;

namespace Rakib //eta rakib namespace
{
    int age=24;
    void hello()
    {
        cout<<"rakib namespace"<<endl;
    }

    class r
    {

    };
}
namespace Sakib //eta sakib namespace
{
    int age2=36;
    void hello2()
    {
        cout<<"sakib namespace"<<endl;
    }

    class s
    {

    };
}
         
using namespace Rakib; //when cout without deteils namespace then only use
using namespace Sakib; //when cout without detiels namespace then only use      
int main()
{

    //  cout<<Rakib::age<<endl; //cout with detiels
    //  cout<<Sakib::age2<<endl; //cout with detiels

    //when we declare namespace under main namespace then no need to write detiels if write age or age2 like those variable then auto detected that this is under a namspace variable
    //whout detiels every time
    cout<<age<<" "<<endl;
    cout<<age2<<endl;
    hello(); 
    hello2();

    return 0;
}