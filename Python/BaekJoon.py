import sys

t = int(sys.stdin.readline())
arr = []

for i in range(t) :
    cnt = 0
    n,m = map(str, sys.stdin.readline().split())
    for i in range(int(n), int(m) + 1) :
        w = str(i)
        cnt += w.count('0')
    print(cnt)