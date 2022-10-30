//8672 Sumando con pilas
#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector <int> pil;
    for(int i=0;i<n;++i){
        std::string s;
        cin>>s;
        if(s=="AGREGA"){
            int c;
            cin>>c;
            pil.push_back(c);
        }else if(s=="CONSUME"){
            int a,b;
            a=pil.back();
            pil.pop_back();
            b=pil.back();
            pil.pop_back();
            pil.push_back(a+b);
        }else if(s=="IMPRIME"){
            cout<<pil.back()<<endl;
        }
    }
}