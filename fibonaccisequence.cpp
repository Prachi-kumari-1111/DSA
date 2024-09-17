#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n <= 1) return n;
    int a = 0, b = 1;
    for (int i = 2; i <= n; ++i) {
        int temp = a + b;
        a = b;
        b = temp;
    }
    return b;
}

int main() {
    int n = 10; // Calculate the 10th Fibonacci number
    cout << "Fibonacci(" << n << ") = " << fibonacci(n) << endl;
    return 0;
}
