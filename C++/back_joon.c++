#include <bits/stdc++.h>
using namespace std;

int zero[10001];
int one[10001];

int main(){
  int n, tmp;
  cin >> n;

  zero[0] = 1;
  zero[1] = 0;
  zero[2] = 1;

  one[0] = 0;
  one[1] = 1;
  one[2] = 1;

  for(int i=0; i<n; i++){
    cin >> tmp;

    for(int j=3; j<=tmp; j++){
      zero[j] = zero[j-1] + zero[j-2];
      one[j] = one[j-1] + one[j-2];
    }

    cout << zero[tmp] << ' '  << one[tmp] << '\n';
  }

  return 0;
}