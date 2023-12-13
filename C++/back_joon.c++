#include <bits/stdc++.h>
using namespace std;

bool cmp(int& a, int& b){
	return a < b;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int tmp, sum = 0;
	vector<int> v;

	for(int i=0; i<7; i++){
		cin >> tmp;
		if(tmp % 2 != 0) v.push_back(tmp);
	}
	
	sort(v.begin(), v.end(), cmp);
	for(auto d : v){
		sum += d;
	}

	if(sum == 0) cout << -1 << '\n';
	else cout << sum << '\n' << v.at(0) << '\n';

	return 0;
}