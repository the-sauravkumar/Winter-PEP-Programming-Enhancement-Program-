#include <iostream>

using std::cout;
using std::cin;

class Node 
{
public:
    int data;
    Node* next;

    Node(int value) 
    {
        data = value;
        next = nullptr;
    }
};


class Stack 
{
private:
    Node* top;

public:
    Stack() 
    {
        top = nullptr;
    }

    
    void push(int value) 
    {
        Node* newNode = new Node(value);
        newNode->next = top;
        top = newNode;
    }

    
    int pop() 
    {
        if (isEmpty()) 
        {
            cout << "Stack is empty" << "\n";
            return -1;
        }

        int poppedValue = top->data;
        Node* temp = top;
        top = top->next;
        delete temp;

        return poppedValue;
    }

    
    bool isEmpty() 
    {
        return top == nullptr;
    }
};
void reverseArray(int arr[], int size) 
{
    Stack stack;

    for (int i = 0; i < size; i++) 
    {
        stack.push(arr[i]);
    }

    
    for (int i = 0; i < size; i++) 
    {
        arr[i] = stack.pop();
    }
}


void displayArray(int arr[], int size) 
{
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

int main() 
{
    int size;
    cin >> size;

    int arr[size];
    for (int i = 0; i < size; i++) 
    {
        cin >> arr[i];
    }

    cout << "Original Array: ";
    displayArray(arr, size);

    reverseArray(arr, size);

    cout << "Reversed Array: ";
    displayArray(arr, size);
}
