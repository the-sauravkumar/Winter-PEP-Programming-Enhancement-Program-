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
            int poppedValue = arr[top--]; 
        }
    }

    int peek() 
    {
        if (isEmpty()) 
        {
            std::cout << "The stack is empty. Cannot peek.\n";
            return -1;
        } else 
        {
            return arr[top];
        }
    }
};

int main() 
{
    Stack stack;

    stack.push(10);
    stack.push(20);
    stack.push(30);

    cout << "Top element: " << stack.peek() << "\n";

    stack.pop();
    stack.pop();

    cout << "Top element after pops: " << stack.peek() << "\n";

    stack.pop();
}
