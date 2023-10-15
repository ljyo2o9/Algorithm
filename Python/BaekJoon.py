import sys
#0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987, 1597
n = int(sys.stdin.readline())
arr = [0, 1]
sum = 0
m = 0

for i in range(n - 1) :
    m += arr[i - 1] + arr[i - 2]
    arr.append(m)

print(arr[len(arr) - 1])