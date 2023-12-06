#include <bits/stdc++.h>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, m, cnt=0;
	string name;
	map<string, int> mm;
	cin >> n >> m;

	for(int i=0; i<n; i++){
		cin >> name;
		mm[name]++;
	}

	for(int i=0; i<m; i++){
		std:: cin >> name;
		if(mm.find(name) != mm.end()){
			cnt++;
		}
	}

	cout << cnt << '\n';
	
	return 0;
}