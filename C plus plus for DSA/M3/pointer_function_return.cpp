/*
                  
                  
*/
#include <bits/stdc++.h>
using namespace std;
class Student
{
    public:
    int roll;
    int cls;
    double gpa;
    Student(int roll, int cls, int gpa)
    {
        this->roll = roll;
        this->cls = cls;
        this->gpa= gpa;

    }

};

Student * fun()  //student return korechi voyer ki ace eta to amar build kora ekta data type
{
    Student rahim(342,5,4.99);
    Student *p = &rahim; //rahim er pointer retuen korte chachi
    return p;
}         
         
int main()
{

     Student* ans =fun(); //ekhaneo student data type and then ans variable that's store the function calling value
     //cout<<ans.roll<<" "<<ans.cls<<" "<<ans.gpa;
     // jehetu pointer recive kortechi print o pointer er value korte hobe
     cout<<(*ans).roll<<" "<<(*ans).cls<<" "<<(*ans).gpa<<endl; //pointer by manual in class object constructor (age ans k dereferance korte hobe then .object)
    cout<<ans->roll<<" "<<ans->cls<<" "<<ans->gpa; //auto dereferance
    //showing garbage value becuase function return korar pore value delete hoye geche but ami niye eshechi address, address k dereferance kore valu print kortechi value delete hoye geche
    //so how to solve this? //dynamic object lage....dynamic object can solve this
     

    return 0;
}