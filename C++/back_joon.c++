#include <bits/stdc++.h>
using namespace std;

#define pp pair<string, string>
#define mm map<string, string>

bool cmp(pp a, pp b){
	return a.first > b.first;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	string name, state;
	mm ma;

	cin >> n;
	for(int i=0; i<n; i++){
		cin >> name >> state;
		ma[name] = state;
	}

	vector<pp> vec(ma.begin(), ma.end());
	stable_sort(vec.begin(), vec.end(), cmp);

	for(auto d : vec){
		if(d.second == "enter"){
			cout << d.first << '\n';
		}
	}

	return 0;
}