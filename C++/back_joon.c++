#include <bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b){
	long long mod = a % b;
	while(mod > 0){
		a = b;
		b = mod;
		mod = a % b;
	}
	return b;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	long long n, m, mg;
	cin >> n >> m;

	mg = gcd(n, m);
	for(int i=0; i<mg; i++){
		cout << '1';
	}
	cout << '\n';

	return 0;
}