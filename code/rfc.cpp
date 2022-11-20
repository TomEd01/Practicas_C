//Cuantas empresas por mes
#include <bits/stdc++.h>
using namespace std;
int main(){
    char m1,m2;
    int i,longitud;
    string char_array;
    string arr[12] = {"ENERO","FEBRERO","MARZO","ABRIL","MAYO","JUNIO","JULIO","AGOSTO","SEPTIEMBRE","OCTUBRE","NOVIEMBRE","DICIEMBRE"};
    int contadores[12]={0};
    for(i=0;i<15;i++){
        getline(cin,char_array);
        longitud=char_array.length();
        m1=char_array[5];//0
        m2=char_array[6];//1
        if(longitud!=12) return 0;
        if(m1=='0' && m2=='1'){contadores[0]++;}
        else if(m1=='0'&& m2=='2'){contadores[1]++;}
        else if(m1=='0'&& m2=='3'){contadores[2]++;}
        else if(m1=='0'&& m2=='4'){contadores[3]++;}
        else if(m1=='0'&& m2=='5'){contadores[4]++;}
        else if(m1=='0'&& m2=='6'){contadores[5]++;}
        else if(m1=='0'&& m2=='7'){contadores[6]++;}
        else if(m1=='0'&& m2=='8'){contadores[7]++;}
        else if(m1=='0'&& m2=='9'){contadores[8]++;}
        else if(m1=='1'&& m2=='0'){contadores[9]++;}
        else if(m1=='1'&& m2=='1'){contadores[10]++;}
        else if(m1=='1'&& m2=='2'){contadores[11]++;}
    }
    for(i=0;i<12;i++){
        cout<<arr[i]<<" "<<contadores[i]<<"\n";
    }
}