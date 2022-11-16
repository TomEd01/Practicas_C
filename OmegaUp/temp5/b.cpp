//6892 Ordenamiento super basico
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector <int> elementos(n);
    for (int i = 0; i < n; i++) cin >> elementos[i];
    sort(elementos.begin(), elementos.end());
    for (int i = 0; i < n - 1; i++) {
        cout << elementos[i] << " ";
    }
    if(n) cout << elementos[n-1] << endl;
    return 0;
}