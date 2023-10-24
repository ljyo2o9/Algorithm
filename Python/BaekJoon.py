import sys

while True :
    n = sys.stdin.readline()
    if int(n) == 0 : break
    cnt = 0

    for i in n :
        if i == '\n' : continue
        cnt += 1
        
        if i == '1' : cnt += 2
        elif i == '0' : cnt += 4
        else : cnt += 3

    print(cnt + 1)