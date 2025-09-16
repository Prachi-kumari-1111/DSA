#include <bits/stdc++.h>
using namespace std;

// Binary Search Function
int binarySearch(vector<int>& arr, int target) {
    int low = 0, high = arr.size() - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target) 
            return mid;  // Found target
        else if (arr[mid] < target) 
            low = mid + 1;  // Search in right half
        else 
            high = mid - 1; // Search in left half
    }
    return -1; // Not found
}

int main() {
    vector<int> arr = {2, 4, 6, 8, 10, 12, 14};
    int target = 10;

    int result = binarySearch(arr, target);

    if (result != -1)
        cout << "Element found at index " << result << endl;
    else
        cout << "Element not found!" << endl;

    return 0;
}
