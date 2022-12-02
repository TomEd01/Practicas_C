//11570 BFS menor 1
#include <bits/stdc++.h>
using namespace std;
list<int> *ady;
void IniGrafo(int V){ady = new list<int>[V + 1];}

void addEdge(int u, int v){
    ady[u].push_back(v);
    ady[v].push_back(u);
}

void bfs(int src, int V){
    bool *visitado;
    visitado = new bool[V + 1];
    for (int i = 0; i <= V; i++) visitado[i] = false;
    queue<int> Q;
    visitado[src] = true;
    cout << src << " ";
    Q.push(src);
    list<int>::iterator it;
    while (!Q.empty()){
        int u = Q.front();
        Q.pop();
        ady[u].sort();
        for (it = ady[u].begin(); it != ady[u].end(); ++it){
            int v = *it;
            if (!visitado[v]){
                visitado[v] = true;
                cout << v << " ";
                Q.push(v);
            }
        }
    }
}
void imprimirlistas(int v){
    cout << "v " << v << " : ";
    list<int>::iterator it;
    ady[v].sort();
    for (it = ady[v].begin(); it != ady[v].end(); ++it){cout << *it << " ";}
    cout << endl;
}

int main(){
    int N, M, X, a, b;
    cin >> N >> M >> X;
    if ((N < 1) || (N > 100000)) return 0;
    if ((M < 1) || (M > 100000)) return 0;
    if ((X < 1) || (X > 100000)) return 0;
    ady = new list<int>[N + 1];
    for (int i = 1; i <= M; ++i){
        cin >> a >> b;
        if ((a < 1) || (a > N)) return 0;
        if ((b < 1) || (b > N)) return 0;
        addEdge(a, b);
    }
    bfs(X, N);
    cout << endl;
    return 0;
}