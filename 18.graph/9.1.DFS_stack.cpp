#include <iostream>
#include <vector>
#include <stack>

using namespace std;

void DFS(vector<int> adj[], int V, int start) {
    vector<bool> visited(V, false);
    stack<int> st;

    st.push(start);
    cout<<start<<" ";
    while (!st.empty())
    {
        for (int nei = 0; nei < sizeof(adj[start]); nei++)
        {
            st.push(adj[i]);
            cox
        }
        
    }
    
}

int main() {
    int V = 6; // Number of vertices
    vector<int> adj[V];

    // Example graph (undirected)
    adj[0].push_back(1);
    adj[0].push_back(2);
    adj[1].push_back(3);
    adj[1].push_back(4);
    adj[2].push_back(5);

    cout << "DFS Traversal using Stack: ";
    DFS(adj, V, 0);

    return 0;
}


