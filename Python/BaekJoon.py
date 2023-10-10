A,B = map(int, input().split())

de = 1
i = 1

while i <= min(A,B):
    if A % i == 0 and B % i == 0 :
        A /= i
        B /= i
        de *= i
        i = 1
    i += 1

print("%d\n%d" %(de, de * A * B))
