def solution(n):
    bool = int(n % 2 == 0)
    sum = 0
    if(bool) :
        for i in range(n + 1) :
            if i % 2 == 0 :
                sum += i ** 2
    else :
        for i in range(n + 1) :
            if i % 2 == 1 :
                sum += i
    return sum