#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	int a, b, c;
	int _max, _another, _sum;
	cin >> a >> b >> c;

	_max = max(max(a, b), c); _sum = a+b+c; _another = _sum - _max;

	while(_max >= _another){
		_another++; _sum--;
	}

	cout << _sum << endl;

	return 0;
}