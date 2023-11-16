#include <stdio.h>

// 킹 1개, 퀸 1개, 룩 2개, 비숍 2개, 나이트 2개, 폰 8
int arr[] = {1, 1, 2, 2, 2, 8};
int arr2[8];

int main() {
  int n;

  for(int i=0; i<6; i++){
    scanf("%d", &n);

    arr2[i] = arr[i] - n;
  }

  for(int i=0; i<6; i++){
    printf("%d ", arr2[i]);
  }
}