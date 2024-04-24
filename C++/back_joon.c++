#include <bits/stdc++.h>
using namespace std;

queue<int> qu;
vector<int> vec[100001];
int vst[100001], order[100001], cnt = 0;

int main(){
    int n, m, s;
    cin >> n >> m >> s;

    int a, b;

    for(int i=0; i<m; i++){
        cin >> a >> b;
        vec[a].push_back(b);
        vec[b].push_back(a);
    }

    for(int i=0; i<n; i++){
        sort(vec[i].begin(), vec[i].end());
    }

    qu.push(s);
    vst[s] = 1;
    order[s] = ++cnt;

    while(!qu.empty()){
        int qu_f = qu.front();
        qu.pop();

        for (int i = 0; i < vec[qu_f].size(); i++) { // 노드에 연결된 크기만큼 반복
            int tmp = vec[qu_f][i];
			if (!vst[tmp]) {
                vst[tmp] = 1; // 방문처리
				order[tmp] = ++cnt;
				qu.push(tmp); // 큐에 넣고
            }
        }
    }

    for (int i = 1; i <= n; i++) {
		printf("%d\n", order[i]);
	}

    return 0;
}