/*
                  
                  
*/
#include <bits/stdc++.h>
using namespace std;
         
         
int main()
{

     string a = " Hello ";
     string b = "World";
    string c= a+b;
     cout<<c<<endl;
     //a= a+b; //a te store kortechi a+b er value
     cout<<a<<endl;
     //a.append(b); eta and a+b same so a =a+b use korbo eta lekha easy
     cout<<a<<endl;
     string x = "Digonto";
     x= "Digonto_biswas";
     x.push_back('B');
     cout<<x<<endl;
     x.pop_back();
     cout<<x<<endl;
     x.pop_back();
     cout<<x<<endl;
     //asingn
     string p = "Somip";
     cout<<p<<endl;
     p.assign("Somip_biswas");
     cout<<p<<endl;

    //erase
    string q = "Isani";
    cout<<q<<endl;
    //q.erase(3); //nth number index er pore sob delte kore dibe
    cout<<q<<endl;
    //nth index only delete korar joinno nth index and nth index sho kotogula index delete korte chai ota dite hobe
    q.erase(2,1);
    cout<<q<<endl;
    //erase plus replace
    string m = "Isani_Roy";
    m.erase(5,4);
    m.replace(5,4, "biswas");
    cout<<m<<endl;

    //insert
    string r = "Isni";
    cout<<r<<endl;
    r.insert(2,"a");
    cout<<r<<endl;

    return 0;
}