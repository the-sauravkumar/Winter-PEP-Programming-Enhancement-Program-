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

void removeKthElement(linked_list_node *&head, int k)
{
    // Check if the linked list is empty or if k is negative
    if (head == nullptr || k < 0)
        return;

    // Special case: Remove the first element (k = 0)
    if (k == 0)
    {
        linked_list_node *temp = head;
        head = head->ptr;
        delete temp;
        return;
    }

    // Traverse the linked list to the node before the Kth node
    linked_list_node *current = head;
    for (int i = 0; i < k - 1 && current != nullptr; ++i)
    {
        current = current->ptr;
    }

    // Check if the index is out of bounds or if the current node is nullptr
    if (current == nullptr || current->ptr == nullptr)
        return;

    // Remove the Kth element by adjusting pointers and deleting the node
    linked_list_node *temp = current->ptr;
    current->ptr = current->ptr->ptr;
    delete temp;
}

void print(linked_list_node *head)
{
    linked_list_node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << "->";
        temp = temp->ptr;
    }
    cout << "nullptr" << std::endl;
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

    print(head);
    removeKthElement(head, 2);
    cout << "After removal\n";
    print(head);
}
