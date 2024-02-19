/*
                  
                  
*/
#include <bits/stdc++.h>
using namespace std;
         
         
int main()
{

     long long n,q;
     cin>>n>>q;
     long long ar[n];
     long long pre[n];
     for (int i = 0; i < n; i++)
     {
        cin>>ar[i];
       
     }
     
    
    //prefix sum
    pre[0]=ar[0]; //0th index general array= prefixsum 0th index
     for (int i = 1; i < n; i++)
     {
        pre[i]=ar[i]+pre[i-1];
     }
     
     
     //test case or qurary work

     while (q--) //q means quary/ test case so test case 0 na houya porjonto cholte thakbe
     {  
        long long r, l;
        cin>>l>>r;
             r--; //jehetu index dey nai position(r) dice so 1st time -- kore 1 komiye niyechi(so position theke index hoiya geche)
             l--; //jehetu index dey nai position(l) dice so 1st time -- kore 1 komiye niyechi(so position theke index hoiya geche)
        long long sum;
        if(l==0)  //if l ==0 then 0th to rth index er sum that is pre[r];
        {
            sum=pre[r];
        }
        else
        {
            sum=pre[r]-pre[l-1];
        }
        cout<<sum<<endl;
     }
     

    return 0;
}