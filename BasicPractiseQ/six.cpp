#include <iostream>
using namespace std;

class HashTable {
private:
    int* arr;
    int capacity;

public:
    HashTable(int capacity) {
        this->capacity = capacity;
        arr = new int[capacity];
        for (int i = 0; i < capacity; i++) {
            arr[i] = -1;
        }
    }

    int hashFunction(int key) {
        return key % capacity;
    }

    void insert(int key, int value) {
        int index = hashFunction(key);
        if (arr[index] == -1) {
            arr[index] = value;
        } else {
            cout << "Collision occurred. Cannot insert element." << endl;
        }
    }

    int search(int key) {
        int index = hashFunction(key);
        if (arr[index] != -1) {
            return arr[index];
        } else {
            cout << "Element not found in the hash table." << endl;
return -1;
        }
    }

    void deleteKey(int key) {
        int index = hashFunction(key);
        if (arr[index] != -1) {
            arr[index] = -1;
        } else {
            cout << "Element not found in the hash table." << endl;
        }
    }
};
int main() {
    HashTable hashTable(10);
    hashTable.insert(5, 25);
    hashTable.insert(15, 35);
    cout << "Search result: " << hashTable.search(5) << endl;
    hashTable.deleteKey(5);
    cout << "Search result after deletion: " << hashTable.search(5) << endl;
    return 0;
}

