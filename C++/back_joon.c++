#include <bits/stdc++.h>
using namespace std;

#define pp pair<int, int>

bool cmp(int& a, int& b){
	return a > b;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n, tmp;
	cin >> n;

	vector<int> v(n);

	for(int i=0; i<n; i++){
		cin >> tmp;
		v[i] = tmp;
	}

	sort(v.begin(), v.end(), cmp);
	for(auto d : v){
		cout << d << '\n';
	}

	return 0;
}