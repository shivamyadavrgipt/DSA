#include <bits/stdc++.h>
using namespace std;

void addedge(vector<int> adj[], int u, int v) {
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void printGraph(vector<int> adj[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "Node " << i << " -> ";
        for (int j = 0; j < adj[i].size(); j++) {  
            cout << adj[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int n = 4; // Number of nodes
    vector<int> adj[n];

    addedge(adj, 0, 1);
    addedge(adj, 0, 2);
    addedge(adj, 1, 2);
    addedge(adj, 1, 3);

    printGraph(adj, n);
    
    return 0;
}
