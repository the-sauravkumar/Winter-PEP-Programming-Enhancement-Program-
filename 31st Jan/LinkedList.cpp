#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class linked_list_node
{
public:
    int data;
    linked_list_node *ptr;

    linked_list_node(int val)
    {
        data = val;
        ptr = NULL;
    }
};

int main()
{
    int n;
    cin >> n;
    linked_list_node *head = NULL;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        cout << x << endl;
        if (head == NULL)
        {
            head = new linked_list_node(x);
        }
        else
        {
            linked_list_node *temp = head; // assign the first node's address
            while (temp->ptr != NULL)
            {
                temp = temp->ptr;
            }

            temp->ptr = new linked_list_node(x);
        }
    }

    linked_list_node *temp = head;
    while (temp != NULL)
    {
        // cout<<temp->data<<" ";
        temp = temp->ptr;
    }
}