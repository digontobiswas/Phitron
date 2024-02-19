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
 Student* Rahim=  new Student(342,5,4.99);
   // Student *p = &rahim; //rahim er pointer retuen korte chachi
    return Rahim;
}         
         
int main()
{

     Student* ans =fun();
     
     cout<<(*ans).roll<<" "<<(*ans).cls<<" "<<(*ans).gpa<<endl;
    delete ans;
     cout<<(*ans).roll<<" "<<(*ans).cls<<" "<<(*ans).gpa<<endl;

    return 0;
}