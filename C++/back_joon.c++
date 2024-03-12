#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, m, tmp, cnt = 0;
	map<int, int> ma;

	cin >> n >> m;

	for(int i=0; i<n; i++){
		cin >> tmp;
		ma[tmp]++;
	}

	for(int i=0; i<m; i++){
		cin >> tmp;
		ma[tmp]++;
	}

	for(auto d : ma){
		if(d.second == 1) cnt++;
	}

	cout << cnt << '\n';
	return 0;
}