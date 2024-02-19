/*
                  
                  
*/
#include <bits/stdc++.h>
using namespace std;
class Node  //formally node create e noder er class er nam node
{
    public: 
    int val;  //2ta jinis thakbe value and pointer ja next node er pointer
    Node *next;



};
         
         
int main()
{
    Node a,b; //2ta object create 10 20 niye kaj korbo and 10 theke 20 print korbo 1st group e 10 linked list er 1st node k head bole. head theke porer node access korbo
    a.val=10;
    b.val=20;
    a.next=&b;
    b.next=NULL;  //khali pointer 
    
    //for proof value astece kina
    cout<<a.val<<" "<<b.val<<endl;

    //protitar a.val b.val kore dekhle link er dorkar ki chilo?
    //jokhon 1000 2000 node asbe tokhon ki kore korbo?
    //array sequenty chilo tai suru ta bolle ses petam ekhaneo amra start janle link diye ses e jete parbo
    //so oi tecnique follow kore amra kaj korbo

    //suru ta k head bole head e porer group/node er pointer ace..so pointer k dereference kore object dekte pari
    
    cout<<a.next->val<<endl; //print porer noder er value(porer noder er object ja vale)
    cout<<(*a.next).val<<endl; //pointer k age dereferance korchi manually(mane oi object k aceess korchi) then valu niye asci
    return 0;
}