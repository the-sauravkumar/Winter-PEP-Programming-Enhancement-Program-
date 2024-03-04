#include <iostream>

using std::cout;
using std::cin;

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

int ListSize(linked_list_node *head)
{
    int size = 0;
    linked_list_node *temp = head;

    while (temp != NULL)
    {
        size++;
        temp = temp->ptr;
    }

    return size;
}

int main()
{
    int n;
    cin >> n;
    linked_list_node *head = NULL;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        if (head == NULL)
        {
            head = new linked_list_node(x);
        }
        else
        {
            linked_list_node *temp = head;
            while (temp->ptr != NULL)
            {
                temp = temp->ptr;
            }

            temp->ptr = new linked_list_node(x);
        }
    }

    int size = ListSize(head);
    cout << "Size of the linked list: " << size << "\n";
}
