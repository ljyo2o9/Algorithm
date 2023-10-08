a = input()
a = int(a)

b = list(map(int, input().split()))
b_max = max(b)

sum = 0

for i in range(a) :
    b[i] = b[i] / b_max * 100
    sum += b[i]

print(sum / a)

