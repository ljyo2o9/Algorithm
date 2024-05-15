#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;

    vector<int> vec;
    vector<int> vec_tmp;

    for(int i=1; i<=n; i++){
        vec.push_back(i);
    }

    for(int i=0; i<n; i++){
        if(i < m){
            vec_tmp.push_back(1);
        } else {
            vec_tmp.push_back(0);
        }
    }

    do
    {
        for(int i=0; i<n; i++){
            if(vec_tmp[i] == 1){
                cout << vec[i] << ' ';
            }
        }
        cout << '\n';
    } while (prev_permutation(vec_tmp.begin(), vec_tmp.end()));

    return 0;
}