//15135 Distancia-Dijkstra_TareaÁrboles
#include <bits/stdc++.h>
#define MAXN 10010
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> iPair;
int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    int n, o, d, x;
    cin >> n >> o >> d;
    vector<iPair> grafo[n];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> x;
            if (x != 0){grafo[i].push_back(make_pair(j, x));}
        }
    }
    priority_queue<iPair, vector<iPair>, greater<iPair>> pq;
    vector<int> dist(n, INT_MAX);
    pq.push(make_pair(0, o));
    dist[o] = 0;
    while (!pq.empty()){
        int u = pq.top().second;
        pq.pop();
        for (auto it : grafo[u]){
            int v = it.first;
            int weight = it.second;
            if (dist[v] > dist[u] + weight){
                dist[v] = dist[u] + weight;
                pq.push(make_pair(dist[v], v));
            }
        }
    }
    cout << dist[d];
    return 0;
}