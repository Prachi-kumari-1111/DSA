#include <iostream>
using namespace std;

class Stack {
    int* arr;
    int top;
    int capacity;

public:
    Stack(int capacity) {
        this->capacity = capacity;
        arr = new int[capacity];
        top = -1;
    }

    void push(int data) {
        if (top == capacity - 1) {
            cout << "Stack is full. Cannot push element." << endl;
            return;
        }
        arr[++top] = data;
    }

    int pop() {
        if (top == -1) {
            cout << "Stack is empty. Cannot pop element." << endl;
            return -1;
        }
        return arr[top--];
    }

    int peek() {
        if (top == -1) {
            cout << "Stack is empty." << endl;
            return -1;
        }
        return arr[top];
    }
bool isEmpty() {
        return top == -1;
    }

    bool isFull() {
        return top == capacity - 1;
    }
};

int main() {
    Stack stack(5);

    stack.push(1);
    stack.push(2);
    stack.push(3);
    stack.push(4);
    stack.push(5);

    cout << "Popped element: " << stack.pop() << endl;
    cout << "Peek element: " << stack.peek() << endl;

    return 0;
}

