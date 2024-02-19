/*
intput 5 10
*/
#include <iostream>
#include <algorithm>
using namespace std;
void my_swap(int *a,int *b)
{
   int temp = *a;
    *a=*b;
    *b=temp;
    
    
}
int main()
{
    int a, b;
    cin>>a>>b;
    
    //Normal swap
    // int temp = a;
    // a=b;
    // b=temp;
    // cout<<a<<" "<<b<<endl; output 10 5

    //swap by function but it will not work
    my_swap(&a, &b);
    cout<<a<<" "<<b<<endl;



    
}