#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
void insert_at_tail(Node *&head, int v)
{
    Node *newNode = new Node(v);
    if (head == NULL)
    {
        head = newNode;
        
        cout<<endl<<"inserted  head"<<endl<<endl;
        return;
    }

    Node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    // tmp ekhon last node e
    tmp->next = newNode;
    cout<<endl<<"inserted at tail"<<endl;
    return;
}
void print_linked_list(Node *head)
{   cout<<endl<<endl;
    cout << "Your Linked List: ";
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout<<endl<<endl;
    
}
void insert_at_any_pos(Node *head, int pos,int v)
{
    Node *newnode=new Node(v); //new ekta node create kore nialm val rakhar joinno
    Node *tmp = head;
    for (int i = 1; i <= pos-1; i++)
    {
        tmp=tmp->next;
    }
    newnode->next=tmp->next; //position er ager index er next mane pore jeta age connect chilo oi node er address ja new node er next e rakte hobe. last connection ses
    tmp->next=newnode; //new node er address er ager node er next k dilamm 1st connection
     cout<<endl<<endl<<"inserted at position"<<pos<<endl<<endl;
   
}

int main()
{
    Node *head = NULL;
    while (true)
    {
        cout << "Option 1: Insert at Tail" << endl;
        cout << "Option 2: Print Linked List" << endl;
        cout << "Option 3: insert at any position" << endl; //ekta option baralam insert er joinno
        cout << "Option 4: Terminate" << endl;
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
            int pos, val; //value and position dorakr
            cout<<"enter the position:"<<endl;
            cin>>pos;
            cout<<"enter the val:"<<endl;
            cin>>val;
            
            insert_at_any_pos(head, pos, val);
        }
        else if (op == 4)
        {
            break;
        }
    }
    return 0;
}