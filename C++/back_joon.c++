#include <bits/stdc++.h>
using namespace std; 

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	int n, tmp, cnt = 0;
	stack<int> stk;

	cin >> n;
	for(int i=0; i<n; i++){
		cin >> tmp;
		if(tmp == 0) stk.pop();
		else stk.push(tmp);
	}

	while(!stk.empty()){
		cnt += stk.top();
		stk.pop();
	}

	cout << cnt << '\n';

	return 0;
}