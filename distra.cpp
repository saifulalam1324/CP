#include<bits/stdc++.h>
using namespace std;
int V;
int minDistance(const vector<int> &dist, const vector<bool> &sptSet) {
    int min = INT_MAX, min_index;
    for (int v = 0; v < V; v++)
        if (!sptSet[v] && dist[v] <= min)
            min = dist[v], min_index = v;
    return min_index;}
void printSolution(const vector<int> &dist) {
    cout << "Vertex \t Distance from Source" << endl;
    for (int i = 0; i < V; i++)
        cout << i << " \t\t\t" << dist[i] << endl;}
void dijkstra(const vector<vector<int>> &graph, int src) {
    vector<int> dist(V, INT_MAX);
    vector<bool> sptSet(V, false);
    dist[src] = 0;
    for (int count = 0; count < V - 1; count++){
        int u = minDistance(dist, sptSet);
        sptSet[u] = true;
        for (int v = 0; v < V; v++)
            if (!sptSet[v] && graph[u][v] && dist[u] != INT_MAX && dist[u] + graph[u][v] < dist[v])
                dist[v] = dist[u] + graph[u][v];}
                printSolution(dist);}
int main() {
    cin >> V;
    vector<vector<int>> graph(V, vector<int>(V));
    for (int i = 0; i < V; i++) {
        for (int j = 0; j < V; j++) {
            cin >> graph[i][j];}}
    int src;cin >> src;dijkstra(graph, src);
    return 0;
}
