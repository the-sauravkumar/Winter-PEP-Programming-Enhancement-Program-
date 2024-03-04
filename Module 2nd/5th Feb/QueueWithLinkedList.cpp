#include <iostream>
using std::cout;

template <typename T>
struct Node
{
    T data;
    Node<T> *next;

    Node(T value) : data(value), next(nullptr) {}
};

template <typename T>
class Queue
{
private:
    Node<T> *front;
    Node<T> *rear;

public:
    Queue() : front(nullptr), rear(nullptr) {}

    bool isEmpty()
    {
        return front == nullptr;
    }

    void enqueue(T value)
    {
        Node<T> *newNode = new Node<T>(value);

        if (isEmpty())
        {
            front = rear = newNode;
        }
        else
        {
            rear->next = newNode;
            rear = newNode;
        }

        cout << "Enqueued: " << value << "\n";
    }

    void dequeue()
    {
        if (isEmpty())
        {
            cout << "Queue is empty. Cannot dequeue.\n";
            return;
        }

        Node<T> *temp = front;
        front = front->next;

        if (front == nullptr)
        {
            rear = nullptr;
        }

        cout << "Dequeued: " << temp->data << "\n";
        delete temp;
    }

    void frontElement()
    {
        if (isEmpty())
        {
            cout << "Queue is empty.\n";
        }
        else
        {
            cout << "Front element: " << front->data << "\n";
        }
    }

    ~Queue()
    {
        while (!isEmpty())
        {
            dequeue();
        }
    }
};

int main()
{

    Queue<int> myQueue;

    myQueue.enqueue(10);
    myQueue.enqueue(20);
    myQueue.enqueue(30);

    myQueue.frontElement();

    myQueue.dequeue();
    myQueue.frontElement();

    myQueue.dequeue();
    myQueue.frontElement();

    myQueue.dequeue();
}
