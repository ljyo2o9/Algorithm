#include <bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n, tmp;
	string str;
	queue<int> q;
	vector<int> v;
	cin >> n;

	for (int i = 0; i < n; i++){
		cin >> str;
		if (str == "push"){
			cin >> tmp;
			q.push(tmp);
		}
		else if (str == "pop"){
			if (q.empty())
				v.push_back(-1);
			else{
				v.push_back(q.front());
				q.pop();
			}
		}
		else if (str == "size"){
			v.push_back(q.size());
		}
		else if (str == "front"){
			if(q.empty()) v.push_back(-1);
			else v.push_back(q.front());
		}
		else if (str == "back"){
			if(q.empty()) v.push_back(-1);
			else v.push_back(q.back());
		} else {
			if(q.empty()) v.push_back(1);
			else v.push_back(0);
		}
	}

	for(auto d : v){
		cout << d << '\n';
	}
	return 0;
}