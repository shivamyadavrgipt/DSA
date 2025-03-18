#include <bits/stdc++.h> 
using namespace std;

void BFS(const vector<int> adj[], vector<bool> &visited, int s) { 
    queue<int> q; 
    visited[s] = true; 
    q.push(s); 

    while (!q.empty()) { 
        int u = q.front(); 
        q.pop(); 
        cout << u << " "; 

        for (int neighbor : adj[u]) {  
            if (!visited[neighbor]) {  
                visited[neighbor] = true;  
                q.push(neighbor);  
            }
        }
    } 
} 

int main() { 
    int v = 6; 
    vector<bool> visited(v, false); // Visited array

    vector<int> adj[6];  
    adj[0] = {1, 2};
    adj[1] = {0};
    adj[2] = {0};
    adj[3] = {4, 5};
    adj[4] = {3, 5};
    adj[5] = {3, 4};

    // Call BFS for each component
    for (int i = 0; i < v; i++) {
        if (!visited[i]) {  // Run BFS only if the node is unvisited
            BFS(adj, visited, i);
            cout << endl;  // Separate components
        }
    }

    return 0; 
}
