x, y = map(int, input().split())
arr = [[0 for _ in range(x)] for _ in range(y)]

for i in range(y) :
  arr[i] = list(map(int, input().split()))

for i in range(y) :
  arr2 = list(map(int, input().split()))

  arr[i] += arr2

for i in range(y) :
  for j in range(x) :
    print(arr[i][j] + arr[i][j + x], end=' ')
  print()

#   A, B = [], []

# N, M = map(int, input().split())

# for row in range(N):
#     row = list(map(int, input().split()))
#     A.append(row)

# for row in range(N):
#     row = list(map(int, input().split()))
#     B.append(row)
    
# for row in range(N):
#     for col in range(M):
#         print(A[row][col] + B[row][col], end=' ')
#     print()