#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	string tmp, tmp2;
	int n, m;	
	map<string, int> pok;
	map<int, string> kop;

	cin >> n >> m;

	for(int i=1; i<=n; i++){
		cin >> tmp;
		pok[tmp] = i;
		kop[i] = tmp;
	}

	for(int i=0; i<m; i++){
		cin >> tmp2;
		if(tmp2[0] >= 'A' && tmp2[0] <= 'Z'){
			cout << pok.at(tmp2) << '\n';
		} else {
			cout << kop.at(stoi(tmp2)) << '\n';
		}
	}

	return 0;
}