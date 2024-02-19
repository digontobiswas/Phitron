/*
jehetu direct input nitechi tai ager moto temp varibale e decleare kore pore change kore deyor dorkar nai

input item
Rakib 29 4.00
Sakin 30 3.59
                  
                  
*/
#include <bits/stdc++.h>
using namespace std;
class Student
{  public:
    char name[100];
    int roll;
    double cgpa;

};
         
         
int main()
{
    Student a, b;
    cin>>a.name>>a.roll>>a.cgpa;
    cin>>b.name>>b.roll>>b.cgpa;


    //output
    cout<<a.name<<" "<<a.roll<<" "<<a.cgpa<<endl;
    cout<<b.name<<" "<<b.roll<<" "<<b.cgpa<<endl;

     

    return 0;
}