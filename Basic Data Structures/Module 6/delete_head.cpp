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
        cout << endl
             << "Inserted at head" << endl
             << endl;
        return;
    }

    Node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    // tmp ekhon last node e
    tmp->next = newNode;
    cout << endl
         << "Inserted at tail" << endl
         << endl;
}
void print_linked_list(Node *head)
{
    cout << endl;
    cout << "Your Linked List: ";
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl
         << endl;
}
void insert_at_position(Node *head, int pos, int v)
{
    Node *newNode = new Node(v);
    Node *tmp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
    cout << endl
         << endl
         << "Inserted at position " << pos << endl
         << endl;
}

//insert at head
void insert_at_head(Node *&head, int val) //position lagbe na karon head to position jani
{
    Node *newnode = new Node(val);
    newnode->next= head;
    head = newnode;
    cout<<"inserted at head"<<endl;
}
//delete from position
void delete_from_position(Node *head, int pos)
{
    Node *tmp =head;
    for (int i = 1; i <=pos-1; i++)
    {
        tmp=tmp->next;
    } //tmp ekhn delete position er ager ghor e.

    //delete kora variable hariya jabe(position er ager ta ar porer ta connect korle) tai ore ekta jaygay store kore rakhbo p
   Node *deletenode = tmp->next; //tmp->next holo jare delete korbo ore store kore rakhchi deletenode namer ekta node e
    tmp->next=tmp->next->next;  //delete er node e ace tmp. ekhn tmp->next e rakhte hobe tmp->next->next tahole connection hoye jabe
    delete deletenode;
    cout<<"deleted from position"<<endl;
}

//delete head
void delete_head(Node *&head) //head update korbo tai &
{
    Node *deletenode=head; //head delete korar joino head move kore porer ta head korle delete korar joinno khuje pabo na tai store korechi
    head= head->next; //delete er pore porer node ta head hisebe update na korle linklist to khuje pabo na or linklist kaj korbe na so head move kore dici
    delete deletenode; //delete kore dici ager head
    cout<<"Head deleted"<<endl<<endl;
}
int main()
{
    Node *head = NULL;
    while (true)
    {
        cout << "Option 1: Insert at Tail" << endl;
        cout << "Option 2: Print Linked List" << endl;
        cout << "Option 3: Insert at any Position" << endl;
        cout << "Option 4: Insert at head" << endl;
        cout << "Option 5: delete from position" << endl;
        cout << "Option 6: delete from head" << endl;
        cout << "Option 7: Terminate" << endl;
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
            int pos, v;
            cout << "Enter position: ";
            cin >> pos;
            cout << "Enter value: ";
            cin >> v;
            
            if (pos==0)//head insert er joinno, position 0 hole head e insert hobe
            {
                insert_at_head(head, v);
            }   

            else
            {
                 insert_at_position(head, pos, v);
            }
            
           
        }
        else if (op == 4)
        {
            int v;
            cout << "Enter value: ";
            cin >> v;
            insert_at_head(head,v);
        }
        else if (op == 5)
        {
            int pos;
            cout<<"enter the position"<<endl;
            cin>>pos;
            if(pos==0)
            {
                delete_head(head);
            }
            else
            {
                delete_from_position(head, pos);
            }
            
        }
        else if (op == 6)
        {
          delete_head(head);
        }
        else if (op == 7)
        {
          break;
        }

    }
    return 0;
}