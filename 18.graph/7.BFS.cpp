#include <bits/stdc++.h> 
using namespace std;

void BFS(const vector<int> adj[], int v, int s) { 
    vector<bool> visited(v, false); // Use vector instead of array
    queue<int> q; 

    visited[s] = true; 
    q.push(s); 
    while (!q.empty()) { 
        int u = q.front(); 
        q.pop(); 
        cout << u << " "; 

        for (int neighbor : adj[u]) { // for (int i = 0; i < adj[u].size(); i++) 
            if (!visited[neighbor]) { // visited[neighbour]==false
                visited[neighbor] = true; // Mark it as visited
                q.push(neighbor); // Add it to the queue for processing
            }
        }
        
        } 
} 

int main() { 
    int v = 6; 
    vector<int> adj[v]; 

    adj[0] = {1, 2, 5}; 
    adj[1] = {0, 3}; 
    adj[2] = {0, 4}; 
    adj[3] = {1, 5}; 
    adj[4] = {2, 5}; 
    adj[5] = {0, 3, 4}; 

    BFS(adj, v, 0); 

    return 0; 
}
