#소수 찾기

n = int(input())

sosu = []
arr = [a for a in range(2, n + 1)]

while arr[0] ** 2 <= n :
  sosu.append(arr[0])
  arr = [a for a in arr if a % arr[0]]
print(sosu + arr)