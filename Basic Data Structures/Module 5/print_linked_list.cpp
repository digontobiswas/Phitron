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

     Node *head=new Node(10);
     Node *a=new Node(20);
     Node *b=new Node(30);
     Node *c=new Node(40);
     Node*d=new Node(50);

     head->next=a;
     a->next=b;
     b->next=c;
     c->next=d;

     //print
     cout<<head->val<<endl;
     cout<<head->next->val<<endl;
    cout<<head->next->next->val<<endl;
    cout<<head->next->next->next->val<<endl;
    cout<<head->next->next->next->next->val<<endl;
    

    cout<<endl; //line break bojhar joinno

    //loop diye print
    while (head!=NULL)
    {   
        cout<<head->val<<endl; //1st value print
        head=head->next;  //next time a=head hobe je head create korchi se ar head thakbe na.. tar porer bar b head then c then d erokom while loop er karone null na paoyaporjonto cholte thakbe

    }

    //evabe next time korle ar hobe na karon head null hoye bose ace
    //lest check
    while (head!=NULL)
    {   
        cout<<head->val<<endl; 
        head=head->next;  

    } //print hoynai next file linked_list_by_temp.cpp te solve 

    //solution holo head k ekta temp variable e rakhbo temp niye while loop e kaj korbo kintu head head er jaygay thakbe
    

    return 0;
}