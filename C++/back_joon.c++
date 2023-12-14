#include <bits/stdc++.h>
using namespace std;

struct cmp{
	bool operator()(int& a, int& b){
		bool a_bool = false, b_bool = false;
		if(a < 0){
			a *= -1;
			a_bool = true;
		}
		if(b < 0){
			b *= -1;
			b_bool = true;
		}

		if(a == b){
			a = a_bool ? a * -1 : a;
			b = b_bool ? b * -1 : b;

			return a > b;
		} else {
			if(a < b){
				a = a_bool ? a * -1 : a;
				b = b_bool ? b * -1 : b;

				return false;
			} else {
				a = a_bool ? a * -1 : a;
				b = b_bool ? b * -1 : b;

				return true;
			}
		}
	}
};

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n, tmp;
	priority_queue<int, vector<int>, cmp> qu;
	vector<int> v;
	cin >> n;

	for(int i=0; i<n; i++){
		cin >> tmp;
		if(tmp == 0){
			if(qu.empty()) v.push_back(0);
			else {
				v.push_back(qu.top());
				qu.pop();
			}
		}
		else {
			qu.push(tmp);
		}
	}

	for(auto d : v){
		cout << d << '\n';
	}

	return 0;
}