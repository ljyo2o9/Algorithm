#쿼터(Quarter, $0.25)의 개수, 다임(Dime, $0.10)의 개수, 니켈(Nickel, $0.05)의 개수, 페니(Penny, $0.01)

n = int(input())
arr = [0, 0, 0, 0]

for i in range(n) :
  k = int(input())

  while k != 0 :
    if k >= 25 : k -= 25; arr[0] += 1
    elif k >= 10 : k -= 10; arr[1] += 1
    elif k >= 5 : k -= 5; arr[2] += 1
    elif k >= 1 : k -= 1; arr[3] += 1

  print(arr[0], arr[1], arr[2], arr[3])
  arr = [0, 0, 0, 0]