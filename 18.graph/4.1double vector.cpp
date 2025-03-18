#include <bits/stdc++.h>
using namespace std;

void addedge(vector<vector<int>> &adj, int u, int v) {
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void printGraph(const vector<vector<int>> &adj) {
    for (int i = 0; i < adj.size(); i++) {
        cout << "Node " << i << " -> ";
        for (int j = 0; j < adj[i].size(); j++) {  
            cout << adj[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int n = 4; // Number of nodes
    vector<vector<int>> adj(n); // Using a vector of vectors

    addedge(adj, 0, 1);
    addedge(adj, 0, 2);
    addedge(adj, 1, 2);
    addedge(adj, 1, 3);

    printGraph(adj);
    
    return 0;
}

