a, b = input().split()

a = a[::-1]
b = b[::-1]

c = str(int(a) + int(b))

print(int(c[::-1]))