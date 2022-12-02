//11567 DFS mayor 1
#include<bits/stdc++.h>
using namespace std;
#define MAX 100001
list<int> *ady;
bool visitado[ MAX ];    
void dfs(int v){
    visitado[v] = true; 
    cout << v << " ";
    list<int>::iterator it;
    ady[v].sort();  
    ady[v].reverse();
    for(it = ady[v].begin(); it!=ady[v].end();++it){ 
        if(!visitado[*it]){
            dfs(*it);
        }
    }
}
void imprimirlistas(int v){
    cout <<"v "<<v<<" : ";
    list<int>::iterator it;
    ady[v].sort();
    ady[v].reverse();
    for(it = ady[v].begin(); it!=ady[v].end();++it){ 
        cout <<*it<<" ";
    }	
    cout <<endl;
}
int main(){
	int N, M, X, a, b;
	cin >> N >> M >> X;
	if ((N < 1) || (N > 100000)) return 0;
	if ((M < 1) || (M > 100000)) return 0;
	if ((X < 1) || (X > 100000)) return 0;
	ady = new list<int>[N+1];
	for(int i=0;i<=N;i++) visitado[i] = false;
	for( int i = 1 ; i <= M ; ++i ){
		cin >> a >> b; 
		if ((a < 1) || (a > N)) return 0;
		if ((b < 1) || (b > N)) return 0;
        	ady[ a ].push_back( b );
        	ady[ b ].push_back( a ); 
    }
	dfs(X);
	cout <<endl;
	return 0;
}