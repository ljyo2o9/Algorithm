n = int(input())

words = [str(input()) for i in range(n)]

# 중복 값 제거
words = list(set(words))
# 사전 순으로 정렬
words.sort()
# 단어 길이 순으로 정렬
words.sort(key=len)

for i in words:
    print(i)