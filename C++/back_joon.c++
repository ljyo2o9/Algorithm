#include <bits/stdc++.h>
using namespace std;

int n;
char arr[101][101];
int visited[101][101];
queue<pair<int, int>> qu;

int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};

void bfs(int b, int f, char value){
  qu.push({b, f});
  visited[b][f] = 1;

  while(!qu.empty()){
    int x = qu.front().first;
    int y = qu.front().second;
    qu.pop();

    for(int i=0; i<4; i++){
      int nx = x + dx[i];
      int ny = y + dy[i];

      if(nx == 0 || ny == 0 || nx > n || ny > n) continue;
      if(arr[nx][ny] == value && visited[nx][ny] != 1){
        visited[nx][ny] = 1;
        qu.push({nx, ny});
      }
    }
  }
}

void bfsRB(int b, int f, char value){
  char tmpValue = '0';
  qu.push({b, f});
  visited[b][f] = 1;

  if(value == 'R'){
    tmpValue = 'G';
  } else if (value == 'G'){
    tmpValue = 'R';
  }

  while(!qu.empty()){
    int x = qu.front().first;
    int y = qu.front().second;
    qu.pop();

    for(int i=0; i<4; i++){
      int nx = x + dx[i];
      int ny = y + dy[i];

      if(nx == 0 || ny == 0 || nx > n || ny > n) continue;
      if((arr[nx][ny] == value || arr[nx][ny] == tmpValue) && visited[nx][ny] != 1){
        visited[nx][ny] = 1;
        qu.push({nx, ny});
      }
    }
  }
}

int main(){
  int cntRGB = 0, cntRB = 0;
  char str;
  cin >> n;

  for(int i=1; i<=n; i++){
    for(int j=1; j<=n; j++){
      scanf(" %c", &str);
      arr[i][j] = str;
    }
  }

  for(int i=1; i<=n; i++){
    for(int j=1; j<=n; j++){
      if(visited[i][j] != 1){
        cntRGB++;
        bfs(i, j, arr[i][j]);
      }
    }
  }

  for(int i=1; i<=n; i++){
    fill_n(visited[i], n + 1, 0);
  }

  for(int i=1; i<=n; i++){
    for(int j=1; j<=n; j++){
      if(visited[i][j] != 1){
        cntRB++;
        bfsRB(i, j, arr[i][j]);
      }
    }
  }

  // for(int i=1; i<=n; i++){
  //   for(int j=1; j<=n; j++){
  //     cout << arr[i][j] << ' ';
  //   }
  //   cout << '\n';
  // }
  // cout << r << g << b;

  cout << cntRGB << ' ' << cntRB << '\n';

  return 0;
}