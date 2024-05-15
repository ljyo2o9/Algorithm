#include <bits/stdc++.h>
using namespace std;

int arr[101][101], n, m, cnt = 0;
int save[101];

void virus(int start){
  for(int i=start; i<=n; i++){
    for(int j=1; j<=n; j++){
      if(arr[i][j] == 1){
        if(save[j] == 0){
          save[j] = 1;
          cnt++;
          virus(j);
        }
      }
    }
    return;
  }
}

int main(){
  int a, b;

  cin >> n >> m;
  save[1] = 1; 

  // init
  for(int i=1; i<=n; i++){
    for(int j=1; j<=n; j++){
      arr[i][j] = 0;
    }
  }

  for(int i=0; i<m; i++){
    cin >> a >> b;

    arr[a][b] = 1;
    arr[b][a] = 1;
  }

  virus(1);

  cout << cnt << '\n';
  return 0;
}