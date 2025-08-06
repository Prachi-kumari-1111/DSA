#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements (0 to 99): ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int freq[100] = {0}; // frequency array initialized to 0

    // Count frequencies
    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }

    int maxFreq = 0, element = -1;
    for (int i = 0; i < 100; i++) {
        if (freq[i] > maxFreq) {
            maxFreq = freq[i];
            element = i;
        }
    }

    cout << "Element " << element << " has the highest frequency = " << maxFreq << endl;

    return 0;
}
