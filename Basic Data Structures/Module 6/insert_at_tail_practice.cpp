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

//insert at tail or head initial function
void insert_at_tail(int v, Node *&head) //referance add korchi ekan e head change korle jate main function eo change hoy head er null
{
    Node *newnode= new Node(v); //ekta newnode create kore nichi jekhane value nibe ja iccha moto head e initial kora or tail e add korte parbo
    if (head==NULL)
    {
        head=newnode;
        return; //head initial houar pore ekhn e ar kono kaj nai tai return kore dici
    }

    else
    {
        Node * tmp = head;
        while (tmp->next!=NULL)
        {
            tmp=tmp->next;
        } //tmp ekhn last node e or tail e

        tmp->next=newnode;
        
    }
    
} 

//print function
void l_list_print(Node *head)
{
    cout<<"your linked list is:";
 Node * tmp =head;
 while (tmp!=NULL)
 {
    cout<<tmp->val<<" ";
    tmp=tmp->next;
 }
 cout << endl;
}
         
int main()
{

   Node *head=NULL;
   int op;
   cout<<"enter the option number 1 for insert:"<<endl;
   cin>>op;

   if (op==1)
   {
        cout<<"enter the value"<<endl;
        int v;
        cin>>v;
        insert_at_tail(v,head);
        l_list_print(head);

   }
  
    

    return 0;
}