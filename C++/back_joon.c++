#include <bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n, m;
	string site, pw;
	map<string, string> ma;
	vector<string> v;
	cin >> n >> m;
	for(int i=0; i<n; i++){
		cin >> site >> pw;
		ma[site] = pw;
	}
	for(int i=0; i<m; i++){
		cin >> site;
		cout << ma[site] << '\n';
	}

	return 0;
}