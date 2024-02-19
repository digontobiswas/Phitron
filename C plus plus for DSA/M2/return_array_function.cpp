/*
10 20 30 40 50
*/

#include <bits/stdc++.h>
using namespace std;
int* fun()
{   
    //static array
    // int a[5]= {10, 20, 30, 40, 50};
    // return a;
    //dynamic aray
   int *a =new int [5];
   for (int i = 0; i < 5; i++)
   {
    cin>>a[i];
   }
   
    return a;
}
int main()
{
      int  *a =fun();
      for (int i = 0; i < 5; i++)
      {
        cout<<a[i]<<" ";

//show segmentation fault because of after return lost the memory thats why if i alocated the function inside the 
//dynamic memory then it will be solve. 

//when i decalre dynamic array it's working properly
      }
      
}