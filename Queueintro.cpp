#include <iostream>
using namespace std;

class Queue
{

private:
    int *arr;
    int capacity;
    int front;
    int rear;
    int size;

public:
    Queue(int x)
    {
        arr = new int[x];
        capacity = x;
        front = -1;
        rear = -1;
        size = 0;
    }
    bool isempty()
    {
        return size == 0;
    }
    bool isfull()
    {
        return size == capacity;
    }

    void enqueue(int x)
    {
        if (isfull())
        {
            cout << "Queue is full. Cannot enqueue." << endl;
            return;
        }

        if (front == -1)
        {
            front = 0;
            rear = 0;
        }
        else
        {
            rear = (rear + 1) % capacity; // Handle circular queue
        }

        arr[rear] = x;
        size++;
    }

    void dequeue()
    {
        if (isempty())
        {
            cout << "Queue is empty Cannot enqueue." << endl;
            return;
        }

        cout << arr[front] << endl;

        if (front == rear)
        {
            front = -1;
            rear = -1;
        }
        else
        {
            front = (front + 1) % capacity; // Handle circular queue
        }
        size--;
    }

    int getfront()
    {
        if (isempty())
        {
            return -1;
        }
        else
            return front;
    }

    int getrear()
    {
        if (isempty())
        {
            return -1;
        }
        else
        {
            return (front + size + 1) % capacity;
        }
    }
};

int main()
{
    Queue customers = Queue(5);
    customers.enqueue(5);
    customers.dequeue();
}