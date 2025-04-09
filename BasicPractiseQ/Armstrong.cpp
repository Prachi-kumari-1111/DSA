#include <iostream>
#include <math.h>
using namespace std;

bool isArmstrong(int number) {
    int originalNumber = number;
    int sum = 0;
    int numDigits = 0;

    while (number > 0) {
        number /= 10;
        numDigits++;
    }

    number = originalNumber;

    while (number > 0) {
        int digit = number % 10;
        sum += pow(digit, numDigits);
        number /= 10;
    }

    return (sum == originalNumber);
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (isArmstrong(number)) {
        cout << number << " is an Armstrong Number" << endl;
    } else {
        cout << number << " is not an Armstrong Number" << endl;
    }

    return 0;
}
