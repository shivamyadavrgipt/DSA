#include <bits/stdc++.h>
using namespace std;

int main(){
    int v=6;
    vector<int> adj[v];
    
    adj[0] = {1, 2, 5}; 
    adj[1] = {0, 3}; 
    adj[2] = {0, 4}; 
    adj[3] = {1, 5}; 
    adj[4] = {2, 5}; 
    adj[5] = {0, 3, 4}; 

    BFS(adj, v, 0); 
}