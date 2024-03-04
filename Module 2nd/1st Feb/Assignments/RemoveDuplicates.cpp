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

void removeDuplicates(linked_list_node* head) {
    if (head == NULL || head->ptr == NULL) {
        return; 
    }

    linked_list_node* current = head;
    linked_list_node* nextNode;

    while (current->ptr != NULL) {
        if (current->data == current->ptr->data) {
            
            nextNode = current->ptr->ptr;
            delete current->ptr;
            current->ptr = nextNode;
        } else {
         
            current = current->ptr;
        }
    }
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

    cout << "Original Linked List: ";
    displayList(head);


    removeDuplicates(head);

    cout << "Linked List after removing duplicates: ";
    displayList(head);
}
