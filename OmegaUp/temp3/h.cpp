//8867 Pilas basic
#include <bits/stdc++.h>
#include <stack>
using namespace std;
int main(){
    stack <int> pil;
    int Nu,x,i=1,n;
    cin>>Nu;
    for(i;i<=Nu;i++){
        cin>>x;
        switch (x){
        case 1:
            cin>>n;
            pil.push(n);
            break;
        case 2:
            cout<<pil.top()<<"\n";
            pil.pop();
            break;
        case 3:
            cout<<pil.size()<<"\n";
            break;
        default:
            break;
        }
    }
}