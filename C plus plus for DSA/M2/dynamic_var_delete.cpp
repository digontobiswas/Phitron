#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x= 10;
    //nornal variable declar
    int *a =new int;
    *a =10; //dereferance a single a is loction
    cout<<a<<endl; //print will be addresss

    cout<<*a<<endl; //print will be value

    float *b =new float;
    *b =2.567; //dereferance a single a is loction
    cout<<b<<endl; //print will be addresss

    cout<<*b<<endl; //print will be value

    return 0;
} 