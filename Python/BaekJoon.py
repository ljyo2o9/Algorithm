a = input()
arr = [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0]
wndqhr = 0
max_index = 0

for i in range(len(a)):
    if ord(a[i]) >= ord('a') :
        arr[int(ord(a[i]) - ord('a'))] += 1
    elif ord(a[i]) >= ord("A") :
        arr[int(ord(a[i]) - ord("A"))] += 1
    

for i in range(len(arr)) :
    if(arr[i] == max(arr)) :
        wndqhr += 1
        max_index = i

if wndqhr >= 2 : print("?")
else : print(chr(max_index + ord('A')))