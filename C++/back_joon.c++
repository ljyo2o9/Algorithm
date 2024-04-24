#include <bits/stdc++.h>
using namespace std;

vector<int> vec[100001];
int vst[100001], order[100001], cnt = 0;

void dfs(int s){
    for(int i=0; i<vec[s].size(); i++){
        int tmp = vec[s][i]; // 2
        if(vst[tmp] == 0){
            vst[tmp] = 1;
            order[tmp] = ++cnt;
            dfs(tmp);
        }
    }
    return;
}

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

    vst[s] = 1;
    order[s] = ++cnt;
    dfs(s);

    for(int i=1; i<=n; i++){
        cout << order[i] << '\n';
    }
}