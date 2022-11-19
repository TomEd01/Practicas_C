//12352 Rebecca y los Vagones
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,f,c,z,s,masZ,menZ,posMas,posMen;
    std::cin >> n;
    int tren[n]={0};
    for(f=0;f<n;f++){
        s=0;
        for(c=0;c<n;c++){
            cin>>z;
            s=s+z;
        }
        tren[f]=s;
    }
    masZ=tren[0];posMas=0;
    menZ=tren[0];posMen=0;
    for(f=1;f<n;f++){
        if(tren[f]>masZ){
            masZ=tren[f];
            posMas=f;
        }
        if(tren[f]<menZ){
            menZ=tren[f];
            posMen=f;
        }
    }
    std::cout << (posMas+1) << " " << (posMen+1) << std::endl;
}