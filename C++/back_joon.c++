#include <bits/stdc++.h>
using namespace std;

#define pp pair<int, int>
#define ppp pair<int, pp>

bool cmp(int& a, int& b){
	return a > b;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n, m, tmp, gap = 0;
	cin >> n;
	vector<int> arr;
	vector<ppp> v(n);

	for(int i=0; i<n; i++){
		cin >> m;
		for(int j=0; j<m; j++){
			cin >> tmp;
			arr.push_back(tmp);
		}
		sort(arr.begin(), arr.end(), cmp);

		for(int j=0; j<arr.size()-1; j++){
			if(arr[j] - arr[j+1] > gap){
				gap = arr[j] - arr[j+1];
			}
		}

		v[i].first = arr[0];
		v[i].second.first = arr[arr.size() - 1];
		v[i].second.second = gap;

		gap = 0;
		arr.clear();
	}

	for(int i=0; i<n; i++){
		cout << "Class " << i + 1 << '\n';
		cout << "Max " << v[i].first << ", Min " << v[i].second.first << ", Largest gap " << v[i].second.second << '\n';
	}

	return 0;
}