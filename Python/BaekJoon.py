import sys

while True :
    cnt = 0
    n = int(sys.stdin.readline())
    if n == 0 : break


    for i in range(len(str(n))) :
        #print(str(n)[i],str(n)[-i - 1])
        if str(n)[i] != str(n)[-i - 1] : cnt = 1
    if cnt == 1 : print('no')
    else : print('yes')