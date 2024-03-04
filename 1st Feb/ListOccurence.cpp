
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

int countOccurrence(linked_list_node *head, int target)
{
    int count = 0;
    linked_list_node *current = head;

    while (current != nullptr)
    {
        if (current->data == target)
        {
            count++;
        }
        current = current->ptr;
    }

    return count;
}

// Recursive way
int countOccurrenceRecursive(linked_list_node *current, int target) {
    if (current == nullptr) {
        return 0;
    }

    return (current->data == target) + countOccurrenceRecursive(current->ptr, target);
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

    int occ = countOccurrence(head, 4);
    cout << "Occurence : " << occ << "\n";
}
