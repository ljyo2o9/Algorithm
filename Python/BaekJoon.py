a = []; sum = 1; arr = [0, 0, 0, 0, 0, 0, 0, 0, 0, 0]

for i in range(3) :
    a.append(input())
    a[i] = int(a[i])
    sum *= a[i]
for i in range(len(str(sum))):
    arr[int(str(sum)[i])] += 1

for i in range(len(arr)):
    print(arr[i], end='\n')