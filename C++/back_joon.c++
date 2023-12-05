#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	map<string, int> ma;
	vector<string> answer;

	int n, m, cnt = 0;
	string tmp;

	cin >> n >> m;

	for(int i=0; i<n; i++){
		cin >> tmp;
		ma[tmp]++;
	}
	for(int i=0; i<m; i++){
		cin >> tmp;
		ma[tmp]++;
	}
	for(auto i = ma.begin(); i!=ma.end(); i++) {
		if(i->second > 1){
			answer.push_back( i->first);
		}
	}

	sort(answer.begin(), answer.end());

	cout << answer.size() << endl;
	for(string i : answer) {
		cout << i << "\n";
	}

	return 0;
}
