#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Activity {
    int start, end;
};

bool compareActivities(const Activity& a, const Activity& b) {
    return a.end < b.end;
}

void selectActivities(vector<Activity>& activities) {
    sort(activities.begin(), activities.end(), compareActivities);
    int n = activities.size();
    int selected = 1;
    int lastEnd = activities[0].end;

    for (int i = 1; i < n; ++i) {
        if (activities[i].start >= lastEnd) {
            selected++;
            lastEnd = activities[i].end;
        }
    }

    cout << "Maximum non-overlapping activities: " << selected << endl;
}

int main() {
    vector<Activity> activities = {{1, 4}, {3, 5}, {0, 6}, {5, 7}, {3, 9}, {5, 9}};
    selectActivities(activities);
    return 0;
}
