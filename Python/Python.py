def solution(nlist):
    even = ''
    odd = ''
    for i in range(len(nlist)) :
        if nlist[i] % 2 == 0 :
            even = str(even) + str(nlist[i])
        else :
            odd = str(odd) + str(nlist[i])
    return int(even) + int(odd)