#include <iostream>
#include <vector>

using namespace std;

bool DFSRec(vector<int> adj[], int s, vector<bool> &visited, vector<bool> &recStack) {
    visited[s] = true;
    recStack[s] = true;

    for (int u : adj[s]) {
        if (!visited[u] && DFSRec(adj, u, visited, recStack))
            return true;
        else if (recStack[u])
            return true;
    }

    recStack[s] = false;
    return false;
}

bool DFS(vector<int> adj[], int V) {
    vector<bool> visited(V, false);
    vector<bool> recStack(V, false);

    for (int i = 0; i < V; i++) {
        if (!visited[i]) {
            if (DFSRec(adj, i, visited, recStack))
                return true;
        }
    }

    return false;
}

int main() {
    int V = 6; // Number of vertices
    vector<int> adj[V];

    // Example graph
    adj[0].push_back(1);
    adj[1].push_back(2);
    adj[2].push_back(3);
    adj[3].push_back(4);
    adj[4].push_back(5);
    adj[3].push_back(3); // Back edge creating a cycle

    if (DFS(adj, V))
        cout << "Cycle detected" << endl;
    else
        cout << "No cycle detected" << endl;

    return 0;
}
