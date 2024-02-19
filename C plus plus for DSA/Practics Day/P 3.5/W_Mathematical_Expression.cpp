/*
                  
                  
*/
#include <bits/stdc++.h>
using namespace std;
         
         
int main()
{

     int a, b,c;
     char ex, re;
     cin>>a>>ex>>b>>re>>c;
     int sum =a+b;
     int sub =a-b;
     int mul =a*b;
     int op;
    bool result;
    if(ex=='+')
    {
        if(a+b==c)
        {
            result = true;
        }
    
        else
        {
            result = false;
            op = a+b;
        }
        

    }

    else if(ex=='-')
    {
       if(a-b==c)
        {
            result = true;
        }
    
        else
        {
            result = false;
            op = a-b;
        }
    }


    else if(ex=='*')
    {
        if(a*b==c)
        {
            result = true;
        }
    
        else
        { result = false;
            op = a*b;
        }
    }


    if (result==true)
    {
        cout<<"Yes";
    }
    else
    {
        cout<<op;
    }
    
    
    

    return 0;
}