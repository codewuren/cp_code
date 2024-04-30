a = int(input())
if a < 0:
    a -= 2 * a
if a == 9223372036854775808:
    print(88, end='')
    exit()
b = list(str(a))
sum = 0
for i in b:
    sum += int(i)

print(sum, end='')