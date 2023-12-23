#include <bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n, m;
	while(true){
		cin >> n >> m;
		if(n == 0 && m == 0) break;

		if(n > m) cout << "YES" << '\n';
		else cout << "NO" << '\n';
	}	

	return 0;
}