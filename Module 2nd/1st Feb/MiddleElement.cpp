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

linked_list_node* middleElement(linked_list_node *head)
{
    if (head == nullptr || head->ptr == nullptr) 
    {
        return head;
    }

    linked_list_node *slow = head;
    linked_list_node *fast = head;

    while (fast != nullptr && fast->ptr != nullptr)
    {
        slow = slow->ptr;
        fast = fast->ptr->ptr;
    }

    return slow;
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

    linked_list_node *middle = middleElement(head);
    cout << "Middle Element: " << middle->data << "\n";
}
