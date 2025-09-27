#include <iostream>
using namespace std;


struct Node {
    int data;
    Node* next;
};

// Function to find the middle element of a singly linked list
int findMiddleElement(Node* head) {
    if (head == NULL) {
        return -1; // Return -1 if the list is empty
    }

    Node* slow = head;
    Node* fast = head;

    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow->data;
}

int main() {
    // Create a sample linked list: 1 -> 2 -> 3 -> 4 -> 5
    Node* head = new Node();
    head->data = 1;
    head->next = new Node();
    head->next->data = 2;
    head->next->next = new Node();
    head->next->next->data = 3;
    head->next->next->next = new Node();
    head->next->next->next->data = 4;
    head->next->next->next->next = new Node();
    head->next->next->next->next->data = 5;
    head->next->next->next->next->next = NULL;

    // Find the middle element of the linked list
    int middleElement = findMiddleElement(head);

    // Print the middle element
    cout << "Middle element: " << middleElement << endl;

    return 0;
}

