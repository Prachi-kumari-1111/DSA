#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 5, 20, 8, 30};
    int n = 5;

    int maximum = arr[0]; // assume first element is max

    for(int i = 1; i < n; i++) {
        if(arr[i] > maximum) {
            maximum = arr[i];
        }
    }

    cout << "Maximum element: " << maximum << endl;

    return 0;
}
