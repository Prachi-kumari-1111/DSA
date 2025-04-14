#include <iostream>
#include <climits>

// Function to find the maximum contiguous subarray sum
int maxSubarraySum(int arr[], int n) {
    int maxSum = INT_MIN;
    int currentSum = 0;

    for (int i = 0; i < n; i++) {
        currentSum += arr[i];

        if (currentSum > maxSum) {
            maxSum = currentSum;
        }

        if (currentSum < 0) {
            currentSum = 0;
        }
    }

    return maxSum;
}

int main() {
    // Create a sample array
    int arr[] = {-2, -3, 4, -1, -2, 1, 5, -3};
    int n = sizeof(arr) / sizeof(arr[0]);
    // Find the maximum contiguous subarray sum
    int maxSum = maxSubarraySum(arr, n);

    // Print the result
    std::cout << "Maximum contiguous subarray sum: " << maxSum << std::endl;

    return 0;
}