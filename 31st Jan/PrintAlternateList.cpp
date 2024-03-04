#include <iostream>

using std::cout;
using std::cin;

class linked_list_node 
{
public:
    int data;
    linked_list_node* ptr;

    linked_list_node(int val) 
    {
        data = val;
        ptr = nullptr;
    }
};


void printAlternateElements(linked_list_node* head) 
{
    linked_list_node* temp = head;
    bool print = true;

    while (temp != nullptr) 
    {
        if (print) 
        {
            cout << temp->data << " ";
        }
        print = !print;
        temp = temp->ptr;
    }

    cout << "\n";
}

int main() 
{
    int n;
    cin >> n;
    linked_list_node* head = nullptr;

    for (int i = 0; i < n; i++) 
    {
        int x;
        cin >> x;
        if (head == nullptr) 
        {
            head = new linked_list_node(x);
        } else 
        {
            linked_list_node* temp = head;
            while (temp->ptr != nullptr) 
            {
                temp = temp->ptr;
            }

            temp->ptr = new linked_list_node(x);
        }
    }


    cout << "Alternate elements: ";
    printAlternateElements(head);
}