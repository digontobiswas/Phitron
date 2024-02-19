/*
                  
                  
*/
#include <bits/stdc++.h>
using namespace std;
//   void fun(int *p)
//    {
//       *p =20; // main er o value change hobe bcz derefarance kore dici
//       int p=30; //vale 30 hob na karon derefarence kori nai
      
//    }   

//referance hisebe korle memory address same thakbe mane main function er vriable and perameter e reacive variable er memory samne thakbe tokhn ar dereferance korte hobe na ektar value change korle onnotar value change hoita jabe

void fun(int &p)
{
   // cout<<&p;
   p=11;
}
void swap1(int &a,int &b){
   int t=a;
   a=b;
   b=t;
}         
int main()
{

     int val = 10;
     int *prt = &val;
     fun(val);
     int c1=23;
    swap1(c1,val);
    cout<<val<<" "<<c1<<endl;
    cout<<*prt<<endl;
    cout<<prt<<endl;

    return 0;
}