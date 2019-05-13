mod = 1000000007
for _ in range(int(input())):
    n = int(input())

    if n == 1:
        print(n)
    else:
        sum = 1
        for i in range(2, n+1):
            sum = sum + i + sum*(i)
        print(sum % mod)