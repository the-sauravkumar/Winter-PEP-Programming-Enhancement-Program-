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

int findLength(linked_list_node* head) {
    int length = 0;
    linked_list_node* temp = head;
    while (temp != NULL) {
        length++;
        temp = temp->ptr;
    }
    return length;
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

 
    int length = findLength(head);
    cout << "Length of the linked list: " << length << endl;

    linked_list_node* temp = head;
    while (temp != NULL) {
        // cout << temp->data << " ";
        temp = temp->ptr;
    }

    return 0;
}
