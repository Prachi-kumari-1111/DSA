#include <vector>
#include <iostream>
using namespace std;

int maxArea(vector<int> &arr) {
      int n = arr.size();
    int area = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
          
            // Calculating the max area
            area = max(area, min(arr[j], arr[i]) * (j - i));
        }
    }
    return area;
}

int main() {
    vector<int> a = {3, 1, 2, 4, 5};
    cout << maxArea(a);
}