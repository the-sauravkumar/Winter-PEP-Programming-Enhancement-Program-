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

// Function to display the linked list
void displayList(linked_list_node* head) {
    linked_list_node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->ptr;
    }
    cout << endl;
}



// Function to find the middle element of the linked list
linked_list_node* findMiddle(linked_list_node* head) {
    if (head == NULL) {
        return NULL;
    }

    linked_list_node* slow = head;
    linked_list_node* fast = head;

    while (fast != NULL && fast->ptr != NULL) {
        slow = slow->ptr;
        fast = fast->ptr->ptr;
    }

    return slow;
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
        }
        else {
            linked_list_node* temp = head;
            while (temp->ptr != NULL) {
                temp = temp->ptr;
            }

            temp->ptr = new linked_list_node(x);
        }
    }

    cout << "Linked List: ";
    displayList(head);

    int target;
    cout << "Enter the integer to find its occurrence: ";
    cin >> target;


    linked_list_node* middle = findMiddle(head);
    if (middle != NULL) {
        cout << "Middle element of the linked list: " << middle->data << endl;
    } else {
        cout << "Linked list is empty." << endl;
    }
}
