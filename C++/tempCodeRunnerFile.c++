#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> vec(n);
  vector<int> length(n);

  for(int i=0; i<n; i++){
    cin >> vec[i];
  }

  for(int i=0; i<n; i++){
    length[i] = 1;
    for(int j=0; j<i; j++){
      if(vec[i] > vec[j]) {
        length[i] = max(length[i], length[j]+1);
      }
    }
  }

  cout << length[n-1] << '\n';

  return 0;
}