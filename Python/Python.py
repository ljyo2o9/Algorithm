def solution(numLog):
    answer = ''
    for i in range(len(numLog) ) :
        if i == 0 : continue
        sum = numLog[i] - numLog[i - 1]
        if sum == 1 : 
            answer = str(answer) + 'w'
        elif sum == -1 : 
            answer = str(answer) + 's'
        elif sum == 10 :
            answer = str(answer) + 'd'
        elif sum == -10 :
            answer = str(answer) + 'a'
    return answer