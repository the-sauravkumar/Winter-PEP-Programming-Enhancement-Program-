#include <iostream>
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

int findLength(linked_list_node* head) {
    int length = 0;
    linked_list_node* temp = head;
    while (temp != NULL) {
        length++;
        temp = temp->ptr;
    }
    return length;
}

linked_list_node* rotateList(linked_list_node* head, int k) {
    if (head == NULL || k <= 0) {
        return head;
    }

    int length = findLength(head);
    k = k % length;  // To handle cases where k is greater than the length

    if (k == 0) {
        return head;  // No rotation needed
    }

    linked_list_node* temp = head;
    for (int i = 1; i < k && temp != NULL; i++) {
        temp = temp->ptr;
    }

    if (temp == NULL || temp->ptr == NULL) {
        return head;  // Invalid input for k
    }

    linked_list_node* newHead = temp->ptr;
    temp->ptr = NULL;  // Break the linked list

    temp = newHead;
    while (temp->ptr != NULL) {
        temp = temp->ptr;
    }

    temp->ptr = head;  // Connect the end of the rotated part to the original head

    return newHead;
}

int main() {
    int n;
    cin >> n;
    linked_list_node* head = NULL;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
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

    // Display the original linked list
    cout << "Original Linked List: ";
    displayList(head);

    // Rotate the linked list
    int k;
    cout << "Enter the number of positions to rotate: ";
    cin >> k;

    head = rotateList(head, k);

    // Display the rotated linked list
    cout << "Rotated Linked List: ";
    displayList(head);
}
