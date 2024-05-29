#include <bits/stdc++.h>
using namespace std;

int arr[10001], sum = 0;

int main(){
  arr[0] = 0;
  arr[1] = 0;


  for(int i=1; i<=10000; i++){
    int tmp = i; // 1
    string tmp_s = to_string(i); // "1"

    sum += i;

    for(int i=0; i<tmp_s.length(); i++){
      char s = tmp_s[i];

      sum += atoi(&s);
    }

    if(sum <= 10000){
      arr[sum] = 1;
    }

    sum = 0;
  }

  for(int i=1; i<=10000; i++){
    if(arr[i] == 0){
      cout << i << '\n';
    }
  }

  return 0;
}