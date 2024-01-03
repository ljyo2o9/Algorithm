#include <bits/stdc++.h>
using namespace std;

int arr[100001];

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n, x;
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		scanf("%d", &arr[i]);
	}
	sort(arr, arr+n);
	scanf("%d", &x);

	int left = 0;
	int right = n-1;
	int cnt = 0;

	while(left < right){
		int tmp = arr[left] + arr[right];
		if(tmp < x) left++;
		else if(tmp > x) right--;
		else {
			left++;
			right--;
			cnt++;
		}
	}

	cout << cnt << '\n';
	return 0;
}