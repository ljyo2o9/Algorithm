result = ''

my = "He11oWor1d"
over = "lloWorl"
overLen = len(over)
s = 2

result = my[ : s] + over[ : overLen] + my[overLen + s : ]

print(result)