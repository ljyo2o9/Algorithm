import sys

n = int(sys.stdin.readline())
i = 1

while(i != n) :
    i += 1
    if n % i != 0 : continue
    print(i); n /= i; i = 1