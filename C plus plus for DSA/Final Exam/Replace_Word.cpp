/*
                  
                  
*/
#include <bits/stdc++.h>
using namespace std;
         
         
int main()
{

    int t;
     cin>>t;
     string s, x;
     for (int  i = 0; i < t; i++)
     {
        cin>>s>>x;
        int index = s.find(x);
        while(index !=-1)
        {
            s.replace(index, x.size(),"#");
            index =s.find(x,index+1);

        }
        cout<<s<<endl;
     }
     

    return 0;
}