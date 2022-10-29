//8546 Coeficiente binomial recursivo
#include <bits/stdc++.h>
using namespace std;
int nc;
int fun (int n, int k){
    nc++;
    if (k == 0 || k == n) return 1;
    return fun (n-1, k-1) + fun (n-1, k);
}
int main () {
    int n, k;
    nc=0;
    cin >> n >> k;
    if ((k >= 0) && (k <= n) && (n <= 30)) cout << fun(n,k) << " " << nc << "\n";
    return 0;
}