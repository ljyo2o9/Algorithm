n = int(input())
m = list(map(int, input().split()))
cnt = 0

def sosu(m) :
  if m == 1 : return 0
  for i in range(2, m) :
    if m % i == 0 : return 0
  return 1

for i in range(n) :
  p = m[i]

  t = sosu(p)
  if t == 1 : cnt += 1

print(cnt)