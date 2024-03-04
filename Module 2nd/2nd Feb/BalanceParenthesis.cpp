#include <iostream>
#include <stack>
#include <string>

using std::cin;
using std::cout;
using std::string;

class Node
{
public:
    char data;
    Node *next;

    Node(char value)
    {
        data = value;
        next = nullptr;
    }
};

class Stack
{
private:
    Node *top;

public:
    Stack()
    {
        top = nullptr;
    }

    void push(char value)
    {
        Node *newNode = new Node(value);
        newNode->next = top;
        top = newNode;
    }

    char pop()
    {
        if (isEmpty())
        {
            cout << "Stack is empty"
                 << "\n";
            return '\0';
        }

        char poppedValue = top->data;
        Node *temp = top;
        top = top->next;
        delete temp;

        return poppedValue;
    }

    bool isEmpty()
    {
        return top == nullptr;
    }
};

bool areParenthesesBalanced(const string &expression)
{
    Stack stack;

    for (char bracket : expression)
    {
        if (bracket == '(' || bracket == '[' || bracket == '{')
        {
            stack.push(bracket);
        }
        else if (bracket == ')' || bracket == ']' || bracket == '}')
        {
            if (stack.isEmpty())
            {
                return false;
            }

            char poppedBracket = stack.pop();

            if ((bracket == ')' && poppedBracket != '(') ||
                (bracket == ']' && poppedBracket != '[') ||
                (bracket == '}' && poppedBracket != '{'))
            {
                return false;
            }
        }
    }

    return stack.isEmpty();
}

int main()
{
    string expression;
    getline(cin, expression);

    if (areParenthesesBalanced(expression))
    {
        cout << "Parentheses are balanced."
             << "\n";
    }
    else
    {
        cout << "Parentheses are not balanced."
             << "\n";
    }
}