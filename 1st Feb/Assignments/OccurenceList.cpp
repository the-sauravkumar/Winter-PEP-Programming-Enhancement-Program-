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

int findOccurrence(linked_list_node* head, int target) {
    int occurrence = 0;
    linked_list_node* temp = head;
    while (temp != NULL) {
        if (temp->data == target) {
            occurrence++;
        }
        temp = temp->ptr;
    }
    return occurrence;
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
    
    int occurrence = findOccurrence(head, target);
    cout << "Occurrence of " << target << " in the linked list: " << occurrence << endl;
}
