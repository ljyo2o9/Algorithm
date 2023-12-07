#include <bits/stdc++.h>
using namespace std;

struct student{
	string name;
	int kor;
	int eng;
	int math;
};

bool cmp(const student& a, const student& b){
	if(a.kor != b.kor) return a.kor > b.kor;
	else {
		if(a.eng != b.eng) return a.eng < b.eng;
		else if(a.math != b.math) return a.math > b.math;
		else return a.name < b.name;
	}
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n;
	cin >> n;
	vector<student> v(n);

	for(int i=0; i<n; i++){
		cin >> v[i].name >> v[i].kor >> v[i].eng >> v[i].math;
	}

	sort(v.begin(), v.end(), cmp);

	for(int i=0; i<n; i++){
		cout << v[i].name << '\n';
	}
}