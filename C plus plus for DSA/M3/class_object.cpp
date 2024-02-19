/*
                  
                  
*/
#include <bits/stdc++.h>
using namespace std;
class Student
{
    public:
    char name[100];
    int roll;
    double cgpa;
};
         

int main()
{

     Student a;
     a.roll =29;
     a.cgpa =3.4;
     char temp[100]= "rakib";
     strcpy(a.name,temp);  //array 1st time declar kore value equal diye rakha jay but name array ekbar decler kore diyechi tai new arre te value rekhe then copy kore dichi porer array te


    //outpur
    cout<<a.cgpa<<" "<<a.roll<<" "<<a.name<< " ";
    return 0;
}