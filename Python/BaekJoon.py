import math

n = int(input()); cnt = 0

a = str(math.factorial(n))
a = reversed(a)  

for i in a :
  if(i == '0') : cnt += 1
  else : break

print(cnt)