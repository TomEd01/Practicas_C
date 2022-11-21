//7171 Omitiendo el entero más grande
#include<bits/stdc++.h>
using namespace std;
int main(){
  int N;
  cin >> N;
  int arr[N], max = -1;
  for (int i = 0; i < N; i++) {
    cin >> arr[i];
    if (arr[i] > max) max = arr[i];
  }
  int K = N;
  for (int i = 0; i < N; i++) if (arr[i] == max) K--;
  cout << K << endl;
  for (int i = 0; i < N; i++) if (arr[i] != max) cout << arr[i] << " ";
  return 0;
}