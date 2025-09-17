#include <iostream>
using namespace std;

bool isPalindrome(string str) {
    int start = 0, end = str.length() - 1;
    while (start < end) {
        if (str[start] != str[end]) return false;
        start++;
        end--;
    }
    return true;
}

int main() {
    string s = "level";
    if (isPalindrome(s))
        cout << s << " is a Palindrome";
    else
        cout << s << " is NOT a Palindrome";
    return 0;
}
