def solution(nlist):
    answer = nlist
    lenght = len(nlist)
    if answer[lenght - 1] > answer[lenght - 2] :
        answer.append(answer[lenght - 1] - answer[lenght - 2])
    else :
        answer.append(answer[lenght - 1]*2)
    return answer