#include <bits/stdc++.h>
using namespace std;

#define pp pair<int, int>

bool cmp(pp& a, pp& b){
	return a.first < b.first;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n, tmp;
	cin >> n;

	map<int, int> ma;
	for(int i=0; i<n; i++){
		cin >> tmp;
		ma[tmp]++;
	}
	vector<pp> v(ma.begin(), ma.end());
	sort(v.begin(), v.end(), cmp);

	for(auto d : v){
		cout << d.first << ' ';
	}

	return 0;
}