#include <iostream>
using namespace std;

class Queue {
private:
    int* arr;
    int front;
    int rear;
    int capacity;

public:
    Queue(int capacity) {
        this->capacity = capacity;
        arr = new int[capacity];
        front = rear = -1;
    }

    void enqueue(int data) {
        if (rear == capacity - 1) {
            cout << "Queue is full. Cannot enqueue element." << endl;
            return;
        }
        if (front == -1) {
            front = rear = 0;
} else {
            rear++;
        }
        arr[rear] = data;
    }

    int dequeue() {
        if (front == -1) {
            cout << "Queue is empty. Cannot dequeue element." << endl;
            return -1;
        }
        int data = arr[front];
        if (front == rear) {
            front = rear = -1;
        } else {
            front++;
        }
        return data;
    }

    int peek() {
        if (front == -1) {
            cout << "Queue is empty." << endl;
            return -1;
        }
        return arr[front];
}

    bool isEmpty() {
        return front == -1;
    }

    bool isFull() {
        return rear == capacity - 1;
    }
};
int main() {
    Queue queue(5);
    queue.enqueue(10);
    queue.enqueue(20);
    queue.enqueue(30);
    cout << "Dequeued element: " << queue.dequeue() << endl;
    cout << "Peek element: " << queue.peek() << endl;
    return 0;
}

