#include <bits/stdc++.h>
using namespace std;

#define mm map<int, int>

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, m, tmp;
	mm ma;

	cin >> n;
	for(int i=0; i<n; i++){
		cin >> tmp;
		ma[tmp]++;
	}

	cin >> m;
	for(int i=0; i<m; i++){
		cin >> tmp;
		if(ma.find(tmp) != ma.end()){
			cout << ma[tmp] << ' ';
		} else {
			cout << 0 << ' ';
		}
	}
	cout << '\n';
	
	return 0;
}