#include <iostream>
#include <stack>

using std::cout;
using std::cin;
using std::stack;

void display(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

int main() 
{
    const int arraySize = 5;
    int myArray[arraySize];
    
    for (int i = 0; i < arraySize; i++)
    {
        cin >> myArray[i];
    }

    cout << "Original: ";
    display(myArray, 5);

    stack<int> myStack;

    for (int i = 0; i < arraySize; ++i) 
    {
        myStack.push(myArray[i]);
    }
    
    
     for (int i = 0; i < arraySize; ++i) {
        myArray[i] = myStack.top();
        myStack.pop();
    }
    
    cout << "Reversed: ";
    display(myArray, 5);
    cout << "\n";

}