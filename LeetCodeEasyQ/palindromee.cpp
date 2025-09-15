#include <iostream>
using namespace std;

bool isPalindrome(string s) {
    int start = 0, end = s.length() - 1;
    while(start < end) {
        if(s[start] != s[end])
            return false;
        start++;
        end--;
    }
    return true;
}

int main() {
    string str = "madam";

    if(isPalindrome(str))
        cout << "Palindrome";
    else
        cout << "Not Palindrome";
    return 0;
}
