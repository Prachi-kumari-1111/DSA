#include <iostream>
#include <vector>
#include <stack>
using namespace std;

// Graph class (adjacency list representation)
class Graph {
    int V; // Number of vertices
    vector<vector<int>> adj;

public:
    Graph(int vertices) : V(vertices), adj(vertices) {}

    void addEdge(int u, int v) {
        adj[u].push_back(v);
    }

    void topologicalSortUtil(int v, vector<bool>& visited, stack<int>& result) {
        visited[v] = true;
        for (int neighbor : adj[v]) {
            if (!visited[neighbor]) {
                topologicalSortUtil(neighbor, visited, result);
            }
        }
        result.push(v);
    }

    void topologicalSort() {
        vector<bool> visited(V, false);
        stack<int> result;

        for (int i = 0; i < V; ++i) {
            if (!visited[i]) {
                topologicalSortUtil(i, visited, result);
            }
        }

        cout << "Topological order: ";
        while (!result.empty()) {
            cout << result.top() << " ";
            result.pop();
        }
        cout << endl;
    }
};

int main() {
    Graph g(6);
    g.addEdge(5, 2);
    g.addEdge(5, 0);
    g.addEdge(4, 0);
    g.addEdge(4, 1);
    g.addEdge(2, 3);
    g.addEdge(3, 1);

    g.topologicalSort();

    return 0;
}
