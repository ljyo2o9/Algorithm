#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;

  int a, b;

  for(int i=0; i<n; i++){ // 반복
    cin >> a >> b;
    vector<vector<int>> v(a + 1, vector<int>(b + 1));

    for(int j=1; j<=a; j++){ 
      for(int q=j; q<=b; q++){
        if(j == q){
          v[j][q] = 1;
        } else if(j == 1){
          v[j][q] = q;
        } else {
          v[j][q] = v[j][q-1] + v[j-1][q-1];
        }
      }
    }

    cout << v[a][b] << '\n';
  }

  return 0;
}