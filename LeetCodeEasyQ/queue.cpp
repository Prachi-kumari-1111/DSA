#include <iostream>
using namespace std;

#define MAX 100 // maximum size of queue

class Queue {
    int front, rear;
    int arr[MAX];

public:
    Queue() {
        front = -1;
        rear = -1;
    }

    // Insert element at the end
    void enqueue(int x) {
        if (rear == MAX - 1) {
            cout << "Queue Overflow\n";
            return;
        }
        if (front == -1) front = 0;
        arr[++rear] = x;
        cout << x << " enqueued into queue\n";
    }

    // Remove element from the front
    void dequeue() {
        if (front == -1 || front > rear) {
            cout << "Queue Underflow\n";
            return;
        }
        cout << arr[front++] << " dequeued from queue\n";
    }

    // View the front element
    int peek() {
        if (front == -1 || front > rear) {
            cout << "Queue is Empty\n";
            return -1;
        }
        return arr[front];
    }

    // Check if queue is empty
    bool isEmpty() {
        return (front == -1 || front > rear);
    }

    // Display queue elements
    void display() {
        if (isEmpty()) {
            cout << "Queue is Empty\n";
            return;
        }
        cout << "Queue elements: ";
        for (int i = front; i <= rear; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
};

int main() {
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.display();
    cout << "Front element: " << q.peek() << endl;
    q.dequeue();
    q.display();

    return 0;
}
