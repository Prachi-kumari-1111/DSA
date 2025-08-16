#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> merge(vector<vector<int>>& intervals) {
    vector<vector<int>> ans;
    if (intervals.empty()) return ans;

    sort(intervals.begin(), intervals.end());
    ans.push_back(intervals[0]);

    for (int i = 1; i < intervals.size(); i++) {
        if (ans.back()[1] >= intervals[i][0]) {
            ans.back()[1] = max(ans.back()[1], intervals[i][1]);
        } else {
            ans.push_back(intervals[i]);
        }
    }
    return ans;
}

int main() {
    vector<vector<int>> intervals = {{1,3},{2,6},{8,10},{15,18}};
    vector<vector<int>> res = merge(intervals);

    cout << "Merged Intervals:\n";
    for (auto v : res) {
        cout << "[" << v[0] << "," << v[1] << "] ";
    }
    return 0;
}
