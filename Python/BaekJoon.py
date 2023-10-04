a = []; result = []

for i in range(10) :
    a.append(input())
    a[i] = int(a[i])


for value in a :
    value %= 42
    if value not in result :
        result.append(value)
print(len(result))