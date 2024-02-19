/*
                  
                  
*/
#include <bits/stdc++.h>
using namespace std;
 class person
 {
    public:
        int age;
        string name;

    person(string name, int age)
    {
        this->name= name;
        this->age =age;

    }
 };
         
int main()
{
    person rakib("Rakib hasan",24);
    cout<<rakib.name<<" "<<rakib.age<<endl;
     

    return 0;
}