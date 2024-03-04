#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class linked_list_node {
public:
    int data;
    linked_list_node* ptr;

    linked_list_node(int val) {
        data = val;
        ptr = NULL;
    }
};

void displayList(linked_list_node* head) {
    linked_list_node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->ptr;
    }
    cout << endl;
}

void removeKth(linked_list_node*& head, int k) {
    if (head == NULL || k <= 0) {
        cout << "Invalid input for K" << endl;
        return;
    }

    if (k == 1) {
    
        linked_list_node* temp = head;
        head = head->ptr;
        delete temp;
        return;
    }

    linked_list_node* temp = head;
    for (int i = 1; i < k - 1 && temp != NULL; i++) {
        temp = temp->ptr;
    }

    if (temp == NULL || temp->ptr == NULL) {
        cout << "Invalid input for K" << endl;
        return;
    }

    linked_list_node* toRemove = temp->ptr;
    temp->ptr = temp->ptr->ptr;
    delete toRemove;
}

int main() {
    int n;
    cin >> n;
    linked_list_node* head = NULL;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        cout << x << endl;
        if (head == NULL) {
            head = new linked_list_node(x);
        } else {
            linked_list_node* temp = head;
            while (temp->ptr != NULL) {
                temp = temp->ptr;
            }

            temp->ptr = new linked_list_node(x);
        }
    }

  
    cout << "Linked List: ";
    displayList(head);


    // Remove the Kth element
    int k;
    cout << "Enter the position (K) to remove the element: ";
    cin >> k;
    removeKth(head, k);

    // Display the modified linked list
    cout << "Linked List after removing the Kth element: ";
    displayList(head);
}
