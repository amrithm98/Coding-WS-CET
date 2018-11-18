#include<iostream>

using namespace std;

class ListNode
{
    public:
        int data;
        ListNode *next;

        ListNode(int data)
        {
            this->data = data;
            next = NULL;
        }
};

void printList(ListNode *head)
{
    ListNode *temp = head;

    while(temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main()
{
    ListNode *head = NULL;

    int n;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        if(head == NULL)
        {
            head = new ListNode(x);
        }
        else
        {
            ListNode *node = new ListNode(x);
            node->next = head;
            head = node;
        }
    }

    printList(head);

    return 0;
}