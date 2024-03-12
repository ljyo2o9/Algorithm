#include<bits/stdc++.h>
using namespace std;

bool cmp(int a, int b) { 
  return a > b; 
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int c, n, tmp, cnt = 0;
	double sum = 0;
	vector<double> dab;
	// textCase 수
	scanf("%d", &c);

	for(int i=0; i<c; i++){
		// 학생 수
		scanf("%d", &n);
		vector<int> vec(n); // 학생 수 만큼 vector크기 지정 및 생성
		for(int i=0; i<n; i++){
			scanf("%d", &tmp);
			sum += tmp;
			vec[i] = tmp;
		}
		sum /= (double)n;
		sort(vec.begin(), vec.end(), cmp);
		for(int i=0; i<n; i++){
			if(vec[i] > sum) cnt++;
			else break;
		}
		double answer = (double)cnt / (double)n * 100;
		dab.push_back(answer);
		cnt = 0; sum = 0;
	}

	cout << fixed;
	cout.precision(3);

	for(auto d : dab){	
		cout << d << '%' << '\n';
	}
	return 0;
}