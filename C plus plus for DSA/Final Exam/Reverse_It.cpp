/*
                  
                  
*/
#include <bits/stdc++.h>
using namespace std;
class student
{   public:
    string name;
    int cls;
    char s;
    int id;

} ;    
void revf(student a[], int n, int j)
{
    while (j < n)
    {
        swap(a[j].s, a[n - 1].s);
        j++;
        n--;
    }
    return;
}  
         
int main()
{

     int n;
     cin>>n;
     student a[n];
     for (int i = 0; i < n; i++)
     {
        cin>>a[i].name>>a[i].cls>>a[i].s>>a[i].id;
     }
     
    int j = 0;
    revf(a, n, j);

    for (int i = 0; i < n; i++)
    {
        cout << a[i].name << " " << a[i].cls << " " << a[i].s << " " << a[i].id << endl;
    }
     


    return 0;
}