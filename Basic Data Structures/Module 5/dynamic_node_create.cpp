/*
                  
                  
*/
#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node *next;

    Node(int val) 
    {
        this->val=val;   
        this->next=NULL;  
    }


} ; 
         
         
int main()
{

     //normal node
     //Node head(10);  //foramlly node name 1st ta head bole...ar initial o node bole kore


    //dynamic node

    Node *head=new Node(10); //like dynamic object syntax formate data type then pointer of node then = then new then data type ()-constructor perameter
    Node *a= new Node(20);
    head->next=a; //head nijei pointer, so head k dereferance kore or next re access korchi...ar a nijei pointer(address) tai dirrect a dici..ja next node er address


    //print
    cout<<head->val<<endl;  //head er value print
    cout<<head->next->val; //a print head diya....head k dereferance kore next access. next k dereerance kore next mane a er value print


    return 0;
}