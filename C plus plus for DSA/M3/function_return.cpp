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

Student fun()  //student return korechi voyer ki ace eta to amar build kora ekta data type
{
    Student rahim(342,5,4.99);
    return rahim;
}         
         
int main()
{

     Student ans =fun(); //ekhaneo student data type and then ans variable that's store the function calling value
     cout<<ans.roll<<" "<<ans.cls<<" "<<ans.gpa;
     //workign fine

    return 0;
}