#include <bits/stdc++.h>
using namespace std;

int arr[1000];

int main(){
    int n, tmp;

    cin >> n;
    arr[0] = 0;
    arr[1] = 1;
    arr[2] = 2;
    arr[3] = 4;

    for(int i=0; i<n; i++){
        cin >> tmp;

        for(int j=4; j<=tmp; j++){
            arr[j] = arr[j-3] + arr[j-2] + arr[j-1];
        }

        cout << arr[tmp] << '\n';
    }

    return 0;
} 