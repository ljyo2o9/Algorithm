from itertools import combinations

# 주어진 카드들
cards = [93, 181, 245, 214, 315, 36, 185, 138, 216, 295]

# 가능한 모든 조합 생성
all_combinations = combinations(cards, 3)

# 합이 500을 넘지 않는 가장 큰 값을 저장할 변수
max_sum_under_500 = 0

# 가능한 모든 조합을 확인하며 합이 500을 넘지 않는 가장 큰 값을 찾음
for combo in all_combinations:
    combo_sum = sum(combo)
    if combo_sum <= 500 and combo_sum > max_sum_under_500:
        max_sum_under_500 = combo_sum

# 결과 출력
print("500을 넘지 않는 가장 큰 숫자:", max_sum_under_500)
