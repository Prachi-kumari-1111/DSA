
    #include <iostream>
#include <vector>
#include <queue>
using namespace std;

void bfs(vector<vector<int>>& graph, int start) {
    vector<bool> visited(graph.size(), false);
    queue<int> q;
    q.push(start);
    visited[start] = true;

    while (!q.empty()) {
        int curr = q.front();
        cout << curr << " ";
        q.pop();

        for (int neighbor : graph[curr]) {
            if (!visited[neighbor]) {
                q.push(neighbor);
                visited[neighbor] = true;
            }
        }
    }
}

int main() {
    int n = 6; // Number of nodes
    vector<vector<int>> graph(n);

    // Add edges (example graph)
    graph[0] = {1, 2};
    graph[1] = {0, 3, 4};
    graph[2] = {0, 4};
    graph[3] = {1, 4, 5};
    graph[4] = {1, 2, 3};
    graph[5] = {3};

    cout << "BFS traversal starting from node 0: ";
    bfs(graph, 0);
    cout << endl;

    return 0;
}
