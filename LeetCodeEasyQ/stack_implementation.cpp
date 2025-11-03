#include <iostream>
using namespace std;

#define MAX 5 // Maximum size of the stack

class Stack {
    int arr[MAX];
    int top;

public:
    Stack() { top = -1; }

    // Push element into stack
    void push(int x) {
        if (top >= MAX - 1) {
            cout << "Stack Overflow 🚫" << endl;
        } else {
            arr[++top] = x;
            cout << x << " pushed into stack ✅" << endl;
        }
    }

    // Pop element from stack
    void pop() {
        if (top < 0) {
            cout << "Stack Underflow ⚠️" << endl;
        } else {
            cout << arr[top--] << " popped from stack ✅" << endl;
        }
    }

    // Peek top element
    void peek() {
        if (top < 0)
            cout << "Stack is Empty 🕳️" << endl;
        else
            cout << "Top element: " << arr[top] << endl;
    }

    // Display all elements
    void display() {
        if (top < 0) {
            cout << "Stack is Empty 🕳️" << endl;
        } else {
            cout << "Stack elements: ";
            for (int i = 0; i <= top; i++)
                cout << arr[i] << " ";
            cout << endl;
        }
    }
};

// Main function
int main() {
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.display();
    s.peek();
    s.pop();
    s.display();

    return 0;
}
