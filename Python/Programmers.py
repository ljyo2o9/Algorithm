def solution(arr, queries):
    arr_min = []
    result = []
    for i in range(len(queries)):
        s, e, k = queries[i]
        for i in range(s, e + 1) :
            if arr[i] > k :
                arr_min.append(arr[i])
        result.append(-1 if arr_min == [] else min(arr_min))
        arr_min.clear()    
    return result