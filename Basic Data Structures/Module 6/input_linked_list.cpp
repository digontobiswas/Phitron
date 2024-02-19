/*


*/
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

void insert_at_tail(Node *&head, int val)
{
    Node *newnode = new Node(val);
    if (head == NULL)
    {
        head = newnode;
        return;
    }
    Node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = newnode;
}

void linked_list_print(Node *head)
{
    cout << "your linked list is"<<" ";
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp=tmp->next;
    }
    
}

int main()
{
    Node *head = NULL;
    while (true)
    {

        int v;
        cin >> v;
        if (v == -1)
        {
            break;
        }
        insert_at_tail(head, v);
    }

    linked_list_print(head);

    return 0;
}