#include <iostream>
#include <vector>

int main() {
    std::vector<int> arr = {10, 5, 20, 8, 15};
    int target = 8;
    bool found = false;

    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] == target) {
            found = true;
            std::cout << "Target found at index: " << i << std::endl;
            break;
        }
    }

    if (!found) {
        std::cout << "Target not found." << std::endl;
    }
    return 0;
}