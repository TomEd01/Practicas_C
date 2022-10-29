//6333 EasyStack
#include <bits/stdc++.h>
using namespace std;
int main(){
    stack<int> pi1;
    int T, p, n, i;
    cin >> T;
    for (i = 1; i <= T; i++){
        cin >> p;
        if (p == 1){
            cin >> n;
            if (n >= -5000 && n <= 5000){
                pi1.push(n);
            }
        }
        else if (p == 2){
            if (!pi1.empty()) pi1.pop();
        }
        if (p == 3){
            if (!pi1.empty()) cout << pi1.top() << endl;
            else cout << "Empty!" << endl;
        }
    }
    return 0;
}