#include <bits/stdc++.h>
using namespace std;

int arr[10001];

int main(){
  int n, m, now = 1, mi = 100000, sum = 0;

  cin >> n >> m;

  for(int i=1; i<=100; i++){
    arr[i*i] = 1;
  }

  for(int i=n; i<=m; i++){
    if(arr[i] == 1){
      mi = min(mi, i);
      sum += i;
    }
  }

  if(sum == 0){
    cout << -1 << '\n';
    return 0;
  }

  cout << sum << '\n' << mi << '\n';
  return 0;
}