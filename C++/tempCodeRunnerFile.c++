i++){
    for(int j=1; j<=n; j++){
      if(visited[i][j] != 1){
        cout << i << j << ' ' << arr[i][j] << '\n';
        if(arr[i][j] == 'R'){
          r++;
        } else if(arr[i][j] == 'G'){
          g++;
        } else if(arr[i][j] == 'B'){
          b++;
        }
        bfs(i, j, arr[i][j]);
      }
    }
  }