t = int(input())

for _ in range(t):
    n = int(input())
    days = input()
    zeroes, ones, change = 0, 0, 0
    for i in range(n):
        if days[i] == '1':
            ones += 1
        elif days[i] == '0':
            zeroes += 1
        if ones < zeroes:
            change += 1
            ones += 1
            zeroes -= 1
    print(change)