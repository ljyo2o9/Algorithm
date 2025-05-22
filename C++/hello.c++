#include <bits/stdc++.h>
using namespace std;

int n, p, tmp_x, tmp_y;
long long int total = 0, answer = 0;

void area(vector<pair<int, int>>& vec) {
  total = 0;
  for(int i=0; i<p-1; i++) {
    total += (1LL * vec[i].first * vec[i+1].second) - (1LL * vec[i].second * vec[i+1].first);
  }
  total += (1LL * vec[p-1].first * vec[0].second) - (1LL * vec[p-1].second * vec[0].first);
  answer += abs(total);
}

int main() {
  cin >> n;

  for(int i=0; i<n; i++) {
    cin >> p;
    vector<pair<int, int>> vec(p);
    for (int j = 0; j < p; j++) {
      cin >> tmp_x >> tmp_y;
      vec[j] = {tmp_x, tmp_y};
    }

    area(vec);
  }

  cout << answer / 2 << '\n';

  return 0;
}