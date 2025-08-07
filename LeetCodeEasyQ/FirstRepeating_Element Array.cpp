#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int arr[] = {10, 5, 3, 4, 3, 5, 6};
    int n = sizeof(arr)/sizeof(arr[0]);

    unordered_map<int, int> mp;

    for(int i = 0; i < n; i++)
        mp[arr[i]]++;

    for(int i = 0; i < n; i++) {
        if(mp[arr[i]] > 1) {
            cout << "First repeating element: " << arr[i] << endl;
            return 0;
        }
    }

    cout << "No repeating elements found" << endl;
    return 0;
}
