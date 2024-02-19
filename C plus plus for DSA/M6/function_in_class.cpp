/*
                  
                  
*/
#include <bits/stdc++.h>
using namespace std;

class person
{
    public:
        string name;
        int age;
        int mark1;
        int mark2;
    person(string nm, int ag,int m1, int m2)
    {
        name =nm;
        age= ag;
        mark1=m1;
        mark2=m2;
    }
    void fun()
    {
        cout<<"Hello Inside object"<<endl;
        cout<<"Name roll using fun"<<" "<<name<<" "<<age<<endl;
    }

    int total_marks()
    {
        return mark1+mark2;
    }

};     
         
int main()
{

     person rakib("Rakib Ahsan",24,86,55);
     cout<<rakib.name<<" "<<rakib.age<<endl;

    rakib.fun();
    cout<<rakib.total_marks()<<endl;
    return 0;
}