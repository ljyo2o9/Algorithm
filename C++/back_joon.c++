#include <bits/stdc++.h>
#define pp pair<int, int>
using namespace std;

bool cmp(const pp& a, const pp& b){
	if(a.second == b.second) return a.first < b.first;
	return a.second < b.second;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, x, y;
	cin >> n;
	vector<pp> vec;

	for(int i=0; i<n; i++){
		cin >> x >> y;
		vec.push_back(make_pair(x, y));
	}

	sort(vec.begin(), vec.end(), cmp);

	for(auto d : vec){
		cout << d.first << ' ' << d.second << '\n';
	}

	return 0;
}