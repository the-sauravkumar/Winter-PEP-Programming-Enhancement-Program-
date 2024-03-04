#include <iostream>

using std::cout;
using std::cin;

class Stack 
{
private:
    static const int MAX_SIZE = 100; 
    int arr[MAX_SIZE];
    int top;

public:
    Stack() 
    {
        top = -1; 
    }

    bool isEmpty() 
    {
        return top == -1;
    }

    bool isFull() 
    {
        return top == MAX_SIZE - 1; 
    }

    void push(int value) 
    {
        if (isFull()) 
        {
            cout << "Stack overflow\n";
        } 
        else 
        {
            arr[++top] = value;
        }
    }

    void pop() 
    {
        if (isEmpty()) 
        {
            cout << "Stack underflow\n";
        } 
        else 
        {
            --top;
        }
    }

    int peek() 
    {
        if (isEmpty()) 
        {
            cout << "The stack is empty. Cannot peek.\n";
            return -1;
        } 
        else 
        {
            return arr[top];
        }
    }
};

void reverseArrayUsingStack(int arr[], int n)
{
    Stack stack;

    for(int i = 0; i < n; i++)
    {
        stack.push(arr[i]);
    }


    for(int i = 0; i < n; i++)
    {
        arr[i] = stack.peek();
        stack.pop();
    }
}

int main() 
{
    int n;
    cin >> n;
    int arr[n];
    
    for(int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        arr[i] = temp;
    }

    reverseArrayUsingStack(arr, n);

    cout << "Reversed Array: ";
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
}
