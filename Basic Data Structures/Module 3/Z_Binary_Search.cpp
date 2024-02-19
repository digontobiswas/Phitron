/*
#include <bits/stdc++.h>
using namespace std;
         
         
int main()
{

     long long int n,q;
     cin>>n>>q;
     long long int ar[n];
     for (int i = 0; i < n; i++)
     {
        cin>>ar[i];
     }

     sort(ar,ar(n+1))

     while (q--)
     {
        long long int x;
        cin>>x;
        bool flag=false;
        for (int i = 0; i < n; i++)
        {
            if(ar[i]==x)
            {
                flag=true;
                break;
            }
        }

        if (flag==true)
        {
            cout<<"found"<<endl;
        }
        else
        {
            cout<<"not found"<<endl;
        }
        
        
     }
     
     

    return 0;
}
*/

/*
                  
                  
*/
#include <bits/stdc++.h>
using namespace std;
         
         
int main()
{

     long long int n,q;
     cin>>n>>q;
    long long int ar[n];

     for (int i = 0; i < n; i++)
     {
        cin>>ar[i];
     }
    //sort for binary search
     sort(ar,ar+n);

   while (q--)
   {
      long long int x,l,r;
     cin>>x;
     l=0;
     r=n-1;
    bool flag=false;

    //binary search condition
     while (l<=r)
     {
        //mid index find out and if mid index = finding vale then flag true and loop close
        long long int mid_index =(l+r)/2;

        if (ar[mid_index]==x)
        {
            flag=true;
            break;
        }

        if (x>ar[mid_index])
        {
            //dane jao
            l=mid_index+1;
        }

        else
        {
            //bame jao
            r=mid_index-1;
        }

    

     }
     
     //print 
            if (flag==true)
            {
                cout<<"found"<<endl;
            }
            else
            {
                cout<<"not found"<<endl;
            }
   }
   

    
     
     
     

    return 0;
}