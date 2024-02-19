/*
        I am Digonto Biswas and my soul is isnai roy
          
                  
*/
#include <bits/stdc++.h>
using namespace std;
         
         
int main()
{

     string s;
     getline(cin, s);
     cout<<s<<endl;
     //stringstream ss(s);  //stringstream like cobject and ss constractor function and s perameter
    
    //without constractrator
    stringstream ss;
    ss<<s;
     string word;

    //manual work
    //  ss>>word;
    //  cout<<word<<endl;
    //  ss>>word;
    //  cout<<word<<endl;
    //  ss>>word;
    //  cout<<word<<endl;
    //  ss>>word;
    //  cout<<word<<endl;
    //  ss>>word;
    //  cout<<word<<endl;
    //  ss>>word;
    //  cout<<word<<endl;
    //  cout<<word<<endl;
    //  ss>>word;
    //  cout<<word<<endl;
    //  ss>>word;
    //  cout<<word<<endl;
    //  ss>>word;
    //  cout<<word<<endl;
    //  ss>>word;
    //  cout<<word<<endl;


//by while loop it can be done at a time
int x=0; //for word counting
    while (ss>>word)
    {
        cout<<word<<endl;
        x++; //for word counting
    }
    cout<<"The number of word is="<<x<<endl;
   

    return 0;
}