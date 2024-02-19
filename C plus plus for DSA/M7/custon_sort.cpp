/*
                  
                  
*/
#include <bits/stdc++.h>
using namespace std;
 class freq
 {
    public:
    char value;
    int count;
 } ; 
 bool cmp(freq a, freq b)
 {
    return a.count>b.count;
 }     
         
int main()
{
    string s;
    cin>>s;
    freq f[26];
    for (int i = 0; i < 26; i++)
    {
        f[i].value = char(i+'a');
        f[i].count = 0;
    }

    for (char c:s)
    {
        int ascii =int(c-'a');
        f[ascii].count++;
    }
    
    sort(f,f+26,cmp);
    
    for (int i = 0; i < 26; i++)
    {
        if(f[i].count>0)
        {
            cout<< f[i].value <<" " <<f[i].count;
            cout<< endl;
        }
    }
    
     

    return 0;
}