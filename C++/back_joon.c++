#include <iostream>
#include <algorithm>

using namespace std;

int arr[1001];

int main(){
	int n, m;
	cin >> n >> m;

	for(int i=0; i<n; i++){
		cin >> arr[i];
	}
	sort(arr, arr+n);
	reverse(arr, arr+n);

	cout << arr[m-1];

	return 0;
}