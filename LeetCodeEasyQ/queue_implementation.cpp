#include <iostream>
using namespace std;

#define SIZE 5 // Maximum size of the queue

class Queue {
    int arr[SIZE];
    int front, rear;

public:
    Queue() {
        front = -1;
        rear = -1;
    }

    // Enqueue (insert element)
    void enqueue(int value) {
        if (rear == SIZE - 1) {
            cout << "Queue Overflow!" << endl;
            return;
        }

        if (front == -1)
            front = 0;

        arr[++rear] = value;
        cout << value << " enqueued into queue." << endl;
    }

    // Dequeue (remove element)
    void dequeue() {
        if (front == -1 || front > rear) {
            cout << "Queue Underflow!" << endl;
            return;
        }

        cout << arr[front] << " dequeued from queue." << endl;
        front++;
    }

    // Display queue elements
    void display() {
        if (front == -1 || front > rear) {
            cout << "Queue is empty!" << endl;
            return;
        }

        cout << "Queue elements: ";
        for (int i = front; i <= rear; i++)
            cout << arr[i] << " ";
        cout << endl;
    }

    // Peek front element
    void peek() {
        if (front == -1 || front > rear)
            cout << "Queue is empty!" << endl;
        else
            cout << "Front element: " << arr[front] << endl;
    }
};

int main() {
    Queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.display();

    q.dequeue();
    q.display();

    q.peek();

    return 0;
}
