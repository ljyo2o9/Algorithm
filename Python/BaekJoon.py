import sys

one_max = 0; link_x = 0; link_y = 0
arr = [[0 for _ in range(9)] for _ in range(9)]

arr_index = []

for i in range(9) :
  arr[i] = list(map(int, sys.stdin.readline().split()))

  if one_max < max(arr[i]) :
    one_max = max(arr[i])
    link_x = i
    link_y = arr[i].index(max(arr[i]))

print(one_max, link_x + 1, link_y + 1)