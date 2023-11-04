import math

s = input()
cnt = 0

for i in s :
  if(ord(i) <= 82) : cnt += (((ord(i) - 65) // 3) + 2) + 1
  elif(ord(i)< 90) : cnt += math.floor((((ord(i) - 65) / 3) + 1.75)) + 1
  else : cnt += 10
  
print(cnt)


# (ord(A) - 65) % 3
# 65 66 67 A B C
# 68 69 70 D E F
# 71 72 73 G H I
# 74 75 76 J K L
# 77 78 79 M N O

# 80 81 82 83 P Q R S
# 84 85 86 T U V
# 87 88 89 90 W X Y Z