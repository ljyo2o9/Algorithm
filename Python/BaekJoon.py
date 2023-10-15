
x, y = map(int, input().split())

# 둠스 데이
# 1 - 3
# 2 - 7
# 3 - 7
# 4 - 4
# 5 - 9
# 6 - 6
# 7 - 11
# 8 - 8
# 9 - 5
# 10 - 10
# 11 - 7
# 12 - 12

#날짜 구하는 공식
year = 7
n = ((year // 12) + (year % 12) + ((year % 12)//4) + 2) % 7
m = 0
d = n

def day(d) :
    if d == 0 :
        print('SUN')
    elif d == 1 :
        print('MON')
    elif d == 2 :
        print('TUE')
    elif d == 3 :
        print('WED')
    elif d == 4 :
        print('THU')
    elif d == 5 :
        print('FRI')
    elif d == 6 :
        print('SAT')

if x == 1 :
    m = 3
    if m - d <= y :
        while m + d < y :
            m += 7
        if m > y :
            while m != y :
                m -= 1
                d -= 1
        else :
            while m != y :
                m += 1
                d += 1
    else :
        m -= d + 1
        d = 6
        while m != y :
            m -= 1
            d -= 1
    day(d)
elif x == 2 or x == 3:
    m = 7
    if m - d <= y :
        while m + d < y :
            m += 7
        if m > y :
            while m != y :
                m -= 1
                d -= 1
        else :
            while m != y :
                m += 1
                d += 1
    else :
        m -= d + 1
        d = 6
        while m != y :
            m -= 1
            d -= 1
    day(d)
elif x % 2 == 0 :
    m = x
    if m - d <= y :
        while m + d < y :
            m += 7
        if m > y :
            while m != y :
                m -= 1
                d -= 1
        else :
            while m != y :
                m += 1
                d += 1
    else :
        m -= d + 1
        d = 6
        while m != y :
            m -= 1
            d -= 1
    day(d)
elif x == 5 :
    m = 9
    if m - d <= y :
        while m + d < y :
            m += 7
        if m > y :
            while m != y :
                m -= 1
                d -= 1
        else :
            while m != y :
                m += 1
                d += 1
    else :
        m -= d + 1
        d = 6
        while m != y :
            m -= 1
            d -= 1
    day(d)
elif x == 7 :
    m = 11
    if m - d <= y :
        while m + d < y :
            m += 7
        if m > y :
            while m != y :
                m -= 1
                d -= 1
        else :
            while m != y :
                m += 1
                d += 1
    else :
        m -= d + 1
        d = 6
        while m != y :
            m -= 1
            d -= 1
    day(d)
elif x == 9 :
    m = 5
    if m - d <= y :
        while m + d < y :
            m += 7
        if m > y :
            while m != y :
                m -= 1
                d -= 1
        else :
            while m != y :
                m += 1
                d += 1
    else :
        m -= d + 1
        d = 6
        while m != y :
            m -= 1
            d -= 1
    day(d)
elif x == 11 :
    m = 7
    if m - d <= y :
        while m + d < y :
            m += 7
        if m > y :
            while m != y :
                m -= 1
                d -= 1
        else :
            while m != y :
                m += 1
                d += 1
    else :
        m -= d + 1
        d = 6
        while m != y :
            m -= 1
            d -= 1
    day(d)