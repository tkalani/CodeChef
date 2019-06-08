def sumOfDigits(n):
    n = list(map(int, list(n)))
    return ((sum(n)%10)*(-1))%10

for _ in range(int(input())):
    n = input()

    ans = int(n)*10 + sumOfDigits(n)
    print(ans)