#include <iostream>
#include <algorithm>

using namespace std;

int arr[101];

int main(){
	int n, m, sum = 0;
	int rear = 0 , front = 0;
	cin >> n >> m;

	for(int i=0; i<n; i++){
		cin >> arr[i];
	}
	
	sort(arr, arr+n);

	for(int i=0; i<n; i++){
		if(arr[i] <= m){
			sum += arr[i];
			if(sum > m) sum -= arr[i];
			cout << sum << ' ';
		}
	}
	cout << sum << endl;

	return 0;
}