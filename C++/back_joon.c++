#include <iostream>
#include <algorithm>

using namespace std;

int arr[6], sum=0, n;

int main(){
	for(int i=0; i<5; i++){
		cin >> arr[i];
		sum += arr[i];
	}

	sort(arr, arr+5);

	cout << sum/5 << '\n' << arr[2] << endl;
}