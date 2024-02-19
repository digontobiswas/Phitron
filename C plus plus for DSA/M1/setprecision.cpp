/*
10.54545123
*/

#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
    double a;
    cin>>a;
    cout<<a<< endl;
    cout<<fixed <<setprecision(5) <<a<< endl;
    cout<<fixed <<setprecision(3) <<a<< endl;
    //without header file this function is not working-iomanip

    
    return 0;
}