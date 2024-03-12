#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, m, sum = 0, cnt = 1;
	vector<int> vec(1001);

	for(int i=1; i<=1000; i++){
		for(int j=1; j<=i; j++){
			vec[cnt] = i;
			cnt++;
			if(cnt == 1001) break;
		}
		if(cnt == 1001) break;
	}

	cin >> n >> m;

	for(int i=n; i<=m; i++){
		sum += vec[i];
	}

	cout << sum << '\n';
	return 0;
}