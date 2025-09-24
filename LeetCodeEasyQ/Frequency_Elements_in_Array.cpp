#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int arr[] = {1, 2, 2, 3, 4, 1, 5, 3, 3};
    int n = 9;

    unordered_map<int, int> freq;

    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }

    cout << "Element frequencies:\n";
    for (auto it : freq) {
        cout << it.first << " -> " << it.second << endl;
    }
    return 0;
}
