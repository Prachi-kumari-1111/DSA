#include <iostream>

// Function to check if an array is sorted in ascending order
bool isSorted(int arr[], int n) {
    // Iterate through the array from the second element to the last element
    for (int i = 1; i < n; i++) {
        // If the current element is less than the previous element, return false
        if (arr[i] < arr[i - 1]) {
            return false;
        }
    }
    // If the function hasn't returned false, the array is sorted
    return true;
}

int main() {
    // Create a sample array
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Check if the array is sorted
    if (isSorted(arr, n)) {
        std::cout << "The array is sorted in ascending order." << std::endl;
    } else {
        std::cout << "The array is not sorted in ascending order." << std::endl;
    }

    return 0;
}


