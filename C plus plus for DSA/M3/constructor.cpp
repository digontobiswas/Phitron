/*
                  
                  
*/
#include <bits/stdc++.h>
using namespace std;
class Student
{
    public:
    int roll;
    int cls;
    double cgps;
    //constructor functiom
    Student(int roll, int cls,double cgps)  //class er nam and parameter er nam same thakle arrow sing this pointer use korte hobe otherwise na
    {    
        // roll =r;
        // cls= c;
        // cgps =g;
        //upper code is right but if i use code like bleow
        roll =roll;
        cls =cls;
        cgps =cgps;
        //it will be give me gurbage value it don't know kar value kake dibe so need a more pointer solve this isue.
        //if i want to give same name then need to do a extra work(This).This is a pointer build in.Jei class er under e this use korbo oi class k bujhay. this diye oita k dhore ante pari
        //this->roll this. roll likle auto ager moto hoye jay karon this pointer to this k dereferance kore value dite hobe
        // (*this).roll =roll;
        // (*this).cls =cls;
        // (*this).cgps =cgps;
        //uper code is manual but sortcut is bleow
        this->roll = roll;
        this->cls = cls;
        this->cgps = cgps;
    }
};         
         
int main()
{
    /*
    without constructor need to input like bleow

     Student rahim;
    Student Karim;
    rahim.roll =15;
    rahim.cls =9;
    rahim.cgps =5.00;
    Karim.roll =03;
    Karim.cls =8;
    Karim.cgps =4.35;
    */

   //after constructor
   Student rahim(15,9,5.00);  //auto niye niche object er sthe ()diye perameter dile auto niye nibe constructor call hoye jabe
   Student karim(03, 8, 4.35);

   cout<<rahim.roll<<" "<<rahim.cls<<" "<<rahim.cgps<<endl;
   cout<<karim.roll<<" "<<karim.cls<<" "<<karim.cgps;
    

     

    return 0;
}