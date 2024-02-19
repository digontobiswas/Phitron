/*
                  
                  
*/
#include <bits/stdc++.h>
using namespace std;
         
         
int main()
{

     string j;
     getline(cin,j);
     stringstream ss(j);
     string word;
     int flag =0;
     while (ss>>word)
     {
        if(word=="Jessica")\
        {
            flag =1;
        break;
        }
        
     }
     if(flag==1)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
     


    return 0;
}