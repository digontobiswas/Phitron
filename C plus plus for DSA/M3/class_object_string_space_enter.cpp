/*
jehetu direct input nitechi tai ager moto temp varibale e decleare kore pore change kore deyor dorkar nai

input item
Rakib 29 4.00
Sakin 30 3.59
            second time input 
            rakib hasan 29  4.00
            sakib hasan 30 3.50

 nam er moddhe space thakle = nam tai ekta line cin.getline  
 1st er ta kaj korleo second ta kaj kore nai karon second line e giya enter k input niche so getchar(); use korte hobe      
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
    // cin>>a.name>>
    // cin>>b.name>>b.roll>>b.cgpa;

    //jehetu space ace cin.getline diye input niyechi
    cin.getline(a.name,100);
   
    cin>>a.roll>>a.cgpa;
    //enter ignor korar joinno getchar();
    getchar();
    cin.getline(b.name,100);
    cin>>b.roll>>b.cgpa;


    //output
    cout<<a.name<<" "<<a.roll<<" "<<a.cgpa<<endl;
    cout<<b.name<<" "<<b.roll<<" "<<b.cgpa<<endl;

     

    return 0;
}