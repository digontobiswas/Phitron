/*
                  
                  
*/
#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node *next;

    Node(int val) //constructor
    {
        this->val=val;   //same perameater e reacive korchi tai
        this->next=NULL;  //jokhn head er pore ar kono node ace kina jani na tai null suru te diya dici pore main function e porer er node er address diya dibo

    }


} ;     
         
int main()
{
    Node a(10);
    Node b(20);
    a.next=&b;  //null theke b er address diya dibo
    b.next=NULL;  //pore ar node nai tai null diya dici

    cout<<a.next->val<<" "; //a theke access kore b print korchi
     

    return 0;
}