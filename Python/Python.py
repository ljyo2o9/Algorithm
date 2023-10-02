def solution(code):
    lenght = len(code)
    mode = 0
    ret = ''
    for i in range(lenght) :
        if code[i] == '1' :
            mode = int(not(mode))
            continue
        if i % 2 == 0 and mode == 0 : 
            ret += code[i]
        elif i % 2 == 1 and mode == 1 :
            ret += code[i]
    if len(ret) == 0 : 
        return "EMPTY"
    else : return ret