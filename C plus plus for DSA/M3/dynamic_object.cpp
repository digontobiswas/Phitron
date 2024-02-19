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
    //constractor
    Student(int roll, int cls, double gpa)
    {
        this->roll =roll;
        this->cls =cls;
        this->gpa =gpa;

    }

};       
         
int main()
{

     Student rahim(342,10,56.55);
    Student* karim= new Student(342,10,56.55); //karim daynamic object
    cout<<(*karim).roll<<" "<<(*karim).cls<<" "<<(*karim).gpa<<endl; //by manual pointer
    cout<<karim->roll<<" "<<karim->cls<<" "<<karim->gpa;

    //manual and shortcut all are working good.
    //lests go now function return now my object is dynamic
    return 0;
}