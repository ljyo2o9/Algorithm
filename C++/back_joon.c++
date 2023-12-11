#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<ll, ll> pp;

bool cmp(pp& a, pp&b){\
	if(a.second == b.second) return a.first < b.first;
	return a.second > b.second;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	ll n, tmp;
	map<ll, ll> ma;

	cin >> n;

	for(int i=0; i<n; i++){
		cin >> tmp;
		ma[tmp]++;
	}

	vector<pp> v(ma.begin(), ma.end());
	sort(v.begin(), v.end(), cmp);

	cout << v.at(0).first << '\n';

	return 0;
}