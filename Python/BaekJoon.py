a = input()
arr = []
jum_arr = []
jum = 0
state = 0

for i in range(int(a)):
    arr.append(input())

for i in range(int(a)) :
    for j in range(len(arr[i])) :
        if arr[i][j] == 'O':
            jum += 1 + state; state += 1
        elif arr[i][j] == 'X' :
            state = 0
    jum_arr.append(jum)
    jum = 0
    state = 0

for i in range(int(a)) :
    print(jum_arr[i])