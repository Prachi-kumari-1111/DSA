#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

int lengthOfLongestSubstring(string s) {
    unordered_set<char> st;
    int l = 0, ans = 0;

    for (int r = 0; r < s.size(); r++) {
        while (st.find(s[r]) != st.end()) {
            st.erase(s[l]);
            l++;
        }
        st.insert(s[r]);
        ans = max(ans, r - l + 1);
    }
    return ans;
}

int main() {
    string s = "abcabcbb";
    cout << "Length of longest substring without repeat: "
         << lengthOfLongestSubstring(s);
    return 0;
}
