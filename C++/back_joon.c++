#include <bits/stdc++.h>
using namespace std;

bool cmp(int& a, int& b){
	return a < b;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n, m, tmp;
	cin >> n >> m;

	vector<int> v(n);

	for(int i=0; i<n; i++){
		cin >> tmp;
		v[i] = tmp;
	}

	sort(v.begin(), v.end(), cmp);
	cout << v[m - 1] << '\n';

	return 0;
}