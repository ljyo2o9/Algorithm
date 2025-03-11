#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, maxValue = 0;
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

  for(auto d : length){
    maxValue = maxValue > d ? maxValue : d;
  }

  cout << maxValue << '\n';
  return 0;
}