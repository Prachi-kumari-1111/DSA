#include <iostream>
using namespace std;

int main() {
    int arr[] = {5, 2, 9, 1, 6};
    int n = sizeof(arr)/sizeof(arr[0]);

    int maxVal = arr[0];
    int minVal = arr[0];

    for(int i = 1; i < n; i++) {
        if(arr[i] > maxVal) maxVal = arr[i];
        if(arr[i] < minVal) minVal = arr[i];
    }

    cout << "Maximum: " << maxVal << "\n";
    cout << "Minimum: " << minVal;
    return 0;
}
