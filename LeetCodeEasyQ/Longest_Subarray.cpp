#include <bits/stdc++.h>
using namespace std;

int longestSubarrayWithSumK(vector<int>& arr, int k) {
    unordered_map<int, int> prefixMap; // stores prefixSum -> index
    int prefixSum = 0;
    int maxLen = 0;

    for (int i = 0; i < arr.size(); i++) {
        prefixSum += arr[i];

        // Case 1: subarray starts from index 0
        if (prefixSum == k)
            maxLen = i + 1;

        // Case 2: subarray between two indices
        if (prefixMap.find(prefixSum - k) != prefixMap.end()) {
            maxLen = max(maxLen, i - prefixMap[prefixSum - k]);
        }

        // Store prefixSum only if not present (to keep earliest index)
        if (prefixMap.find(prefixSum) == prefixMap.end())
            prefixMap[prefixSum] = i;
    }

    return maxLen;
}

int main() {
    vector<int> arr = {1, 2, 3, 1, 1, 1, 1, 4, 2, 3};
    int k = 6;

    cout << "Longest Subarray Length with sum " << k << " = "
         << longestSubarrayWithSumK(arr, k) << endl;

    return 0;
}
