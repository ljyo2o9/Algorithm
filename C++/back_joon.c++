#include <bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	long long int n, m, tmp;
	map<int, int> su;

	cin >> n;
	for(int i=0; i<n; i++){
		cin >> m;
		for(int j=0; j<m; j++){
			cin >> tmp;
			su[tmp]++;
		}
		cin >> m;
		for(int j=0; j<m; j++){
			cin >> tmp;
			if(su.find(tmp) != su.end()) cout << 1 << '\n';
			else cout << 0 << '\n';
		}
		su.clear();
	}

	return 0;
}