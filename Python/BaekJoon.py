import sys

n = int(sys.stdin.readline())
temp = []

for i in range(n) :
    arr = list(map(str, sys.stdin.readline().split()))
    for j in range(len(arr)) :
        temp = arr[j][::-1]
        arr[j] = temp
    for j in range(len(arr)) :
        print(arr[j], end=" ")
    print()