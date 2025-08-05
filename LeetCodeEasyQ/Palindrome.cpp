#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string str;
    cout << "Enter a string or number: ";
    cin >> str;

    string reversed = str;
    reverse(reversed.begin(), reversed.end());

    if (str == reversed)
        cout << "Palindrome" << endl;
    else
        cout << "Not a palindrome" << endl;

    return 0;
}
