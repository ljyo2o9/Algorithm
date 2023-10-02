def solution(lists):
    mul = 1
    sum = 0
    for i in range(len(lists)) :
        mul *= lists[i]
        sum += lists[i]
    if mul <= (sum**2) :
        return 1
    else : 
        return 0