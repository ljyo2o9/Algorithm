n = int(input())
cnt = 0; answer = 666; p = []; t = 0

while True :
  p = list(str(answer))

  for i in range(len(p) - 2) :
    if p[i] == '6' and p[i + 1] == '6' and p[i + 2] == '6' : t = 1
  if t == 1 : cnt += 1
  if cnt == n : break

  answer += 1; t = 0
print(answer)