t = int(input())

for _ in range(t):
    n = int(input())
    arr = list(map(int, input().strip().split(' ')))
    positive = sum(x > 0 for x in arr)
    zeroes = sum(x == 0 for x in arr)
    negative = n-positive-zeroes
    if positive == n or positive == 0:
        print(n, n)
    else:
        if positive >= negative:
            positive += zeroes
            print(positive, negative)
        else:
            negative += zeroes
            print(negative, positive)