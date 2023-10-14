import sys
from itertools import combinations

numbers = []
sum = 0

def print_arr(combo) :
    for i in range(len(combo)) :
        print(combo[i])

for i in range(9) : numbers.append(int(sys.stdin.readline()))

# 7개의 숫자 조합 생성
combinations_list = list(combinations(numbers, 7))
# 중복 배열 제거
unique_combinations = set(tuple(sorted(combo)) for combo in combinations_list)

# 중복을 제외한 조합 출력
for combo in unique_combinations:
    for i in range(len(combo)) :
        sum += combo[i]
    if sum == 100 : 
        print_arr(sorted(combo))
        break
    sum = 0

