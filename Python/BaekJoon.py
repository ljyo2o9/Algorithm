s = input()
arr = []

for i in range(0, 26):
    arr.append(-1)

for i in range(len(s)):
    if arr[int(ord(s[i]) - ord('a'))] != -1 : continue
    arr[int(ord(s[i]) - ord('a'))] = i

for i in range(0, 26):
    print(arr[i], end=' ')
print('')