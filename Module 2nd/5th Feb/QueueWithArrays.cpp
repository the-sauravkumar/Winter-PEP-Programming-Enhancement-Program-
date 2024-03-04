#include <iostream>

using std::cout;

class VeryRealQueue
{
private:
    static const int MAX_SIZE = 100; 
    int arr[MAX_SIZE];
    int front, rear;

public:
    VeryRealQueue()
    {
        front = rear = -1; 
    }

    
    bool isEmpty()
    {
        return front == -1 && rear == -1;
    }

  
    bool isFull()
    {
        return (rear + 1) % MAX_SIZE == front;
    }

   
    void enqueue(int value)
    {
        if (isFull())
        {
            cout << "Queue is full. Cannot enqueue.\n";
            return;
        }

        if (isEmpty())
        {
            front = rear = 0;
        }
        else
        {
            rear = (rear + 1) % MAX_SIZE;
        }

        arr[rear] = value;
        cout << "Enqueued: " << value << "\n";
    }

    
    void dequeue()
    {
        if (isEmpty())
        {
            cout << "Queue is empty. Cannot dequeue.\n";
            return;
        }

        cout << "Dequeued: " << arr[front] << "\n";

        if (front == rear)
        {
            front = rear = -1; 
        }
        else
        {
            front = (front + 1) % MAX_SIZE;
        }
    }

    
    void frontElement()
    {
        if (isEmpty())
        {
            cout << "Queue is empty.\n";
        }
        else
        {
            cout << "Front element: " << arr[front] << "\n";
        }
    }
};

int main()
{
    VeryRealQueue myQueue;

    myQueue.enqueue(10);
    myQueue.enqueue(20);
    myQueue.enqueue(30);

    myQueue.frontElement();

    myQueue.dequeue();
    myQueue.dequeue();

    myQueue.frontElement();
}
