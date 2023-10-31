import sys

cnt = 0
arr = []

while True :
    n = int(sys.stdin.readline())
    if n == -1 : break

    for i in range(1, n):
        if n % i == 0 :
            cnt += i
            arr.append(str(i))

    c = ' + '.join(arr)
    if cnt == n : print(n, "=", c)
    else : print(n, "is NOT perfect.")

    arr.clear()
    cnt = 0