/*
                  
                  
*/
#include <bits/stdc++.h>
using namespace std;

class Student
{
    public:
        int id;
        string name;
        char section;
        int marks;
};

bool compare(Student s1,Student s2)
{
    if(s1.marks>s2.marks)
    {
        return true;
    }
    else if(s1.marks==s2.marks)
    {
        return s1.id < s2.id;
    }
    else 
    {
        return false;
    }
}      
         
int main()
{

       int test;
    cin >> test;

    while(test--)
    {
        Student students[3];
        for (int i = 0; i < 3;i++)
        {
            cin >> students[i].id >> students[i].name>> students[i].section>> students[i].marks;
        }

        Student topper = students[0];
        for (int i = 1; i < 3;i++)
        {
            if(compare(students[i],topper)){
                topper = students[i];
            }

        }

        cout << topper.id << " " << topper.name << " " << topper.section << " " << topper.marks << endl;
    }

    return 0;
}