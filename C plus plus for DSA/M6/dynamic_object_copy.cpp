/*
                  
                  
*/
#include <bits/stdc++.h>
using namespace std;
class person
{
    public:
        string name;
        int age;
        person(string name,int age)
        {
            this->name=name;
            this->age= age;
        }

};      
         
int main()
{
    person* rakib=new person("Rakib Hasan",25);
    person* sakib= new person("Sakib mirdha",36);
    //rakib= sakib;
   // delete sakib;

   //right way to print rakib and sakib
//    rakib->age=sakib->age;
//    rakib->name=sakib->name;
//    delete sakib;
//     cout<<rakib->name<<" "<<rakib->age<<endl;

//evabe korle sob ekta ekta dite hobe time beshi lage like name age aro jodi kisu thake but jodi dereference kore dei taile sob ekshate hoye jabe
        *rakib =*sakib;
        delete sakib;
    cout<<rakib->name<<" "<<rakib->age<<endl;
    //nice working
    return 0;
}