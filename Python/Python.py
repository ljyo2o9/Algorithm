def solution(arr, q):
    j = 0
    for i in range(len(q)) :
        arr[q[i][j]] , arr[q[i][j+1]] = arr[q[i][j+1]] ,  arr[q[i][j]]
    return arr