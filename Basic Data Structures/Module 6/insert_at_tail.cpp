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
 Node *head = NULL;
 void   insert_at_tail( Node *&head,int v)
 {
    Node * newNode= new Node(v); //pointer and value dibe so node ta create korlam
   
    if(head==NULL)
    {
        head=newNode; //head k initial kore dici age head na thakle, or null theke had update hoice
        return;
    } 
     Node *tmp =head;  //head jehetu narabo na tai head k temp variable e rakhlam
    
    
    while (tmp->next!= NULL) //tail kujar loop
    {
        tmp= tmp->next;
    } //tmp ekhn last node e asce tail e asce. so connect kore dibo ekhn

    //connect systax
    tmp->next=newNode;
    }
    
  

void print_linked_list(Node *head)
{
    cout << "Your Linked List: ";
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

int main()
{
    Node *head = NULL;
    while (true)
    {
        cout << "Option 1: Insert at Tail" << endl;
        cout << "Option 2: Print Linked List" << endl;
        cout << "Option 3: Terminate" << endl;
        int op;
        cin >> op;
        if (op == 1)
        {
            cout << "Please enter value: ";
            int v;
            cin >> v;
            insert_at_tail(head, v);
        }
        else if (op == 2)
        {
            print_linked_list(head);
        }
        else if (op == 3)
        {
            break;
        }
    }
    return 0;
}