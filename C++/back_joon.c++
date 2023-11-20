#include <iostream>
using namespace std;

int main()
{
	int x, y, n;
	int max_x = -10001, max_y = -10001, min_x = 10001, min_y = 10001;
	cin >> n;
	for(int i=0; i<n; i++){
		cin >> x >> y;

		max_x = max_x < x ? x : max_x;
		max_y = max_y < y ? y : max_y;

		min_x = min_x > x ? x : min_x;
		min_y = min_y > y ? y : min_y;
	}
	//cout << max_x << ' ' << max_y << ' '<< min_x << ' '<< min_y<< ' ';
	cout << (max_x - min_x) * (max_y - min_y) << endl;

	return 0;
}