#include <bits/stdc++.h>
using namespace std;
int * fun()
{
    int *a = new int; //here new int dynamic and int *a static. and new int give the location. thats why location recive a pointer

    *a =100; //location new int manei *a ....... *a te rakhle new int te chole jabe (dereferance)
    cout<<a<<endl;
    cout<<&a<<endl;  //a er original address
    return a; //return hocce a.....a manei address ekhane ar seta dynamic memory er
    //jehetu address pass kortechi to function return type pointer dorkar
    //Note: static memmory a clear hoye jabe kintu dynamic er location pass kore dichi seta to ar delete hobe na
    //ar value o dereferance kore dynamic e rakha so no problem.
    //dynamic memory je open holo int eta  4 ba 8 byte hote pare computer e 64 byte and 32 byte er upore depend kore.
    //more example in the dynamic_variable.cpp phitron note
}
int main()
{    
     int *p =fun(); //return jehetu pointer so recive kortece pointer
     cout<<p<<endl; //address print
     cout<<*p<<endl; // value print
     
     
}