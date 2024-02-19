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

   Node*head=new Node(10);  
   Node*a=new Node(20);  
   Node*b=new Node(30);  
   Node*c=new Node(40);  
   Node*d=new Node(50);  

   //connection
   head->next=a;
   a->next=b;
   b->next=c;
   c->next=d;


   Node* temp= head; //temp variable e head rekhe dialm loop e temp diye kaj chalabo jate head na NUll hoye jay
   while (temp!=NULL)
   {
        cout<<temp->val<<endl;
        temp=temp->next;
   }
    //abar loop chalaile pabo na karon temp abar null hoiya geche
     while (temp!=NULL)
   {
        cout<<temp->val<<endl;
        temp=temp->next;
   }//pai nai 

   //eta chalanor age abar bolte hobe temp tumi head theke suru koro tahole pabo
    temp=head; //ebar ar nod data type dei nai karon temp variable age initial kora ace
    while (temp!=NULL)
   {
        cout<<temp->val<<endl;
        temp=temp->next;
   } //ebar asce

    return 0;
}