#include <iostream>
using namespace std;

void pyramidPattern(int height) {
    for (int i = 0; i < height; i++) {
        
        for (int j = 0; j < height - i - 1; j++) {
            cout << " ";
        }
       
        for (int j = 0; j < 2 * i + 1; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

int main() {
    int height = 5;
    pyramidPattern(height);
    return 0;
}
