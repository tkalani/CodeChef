def getSum(n):
    sum = 0
    while n:
        sum += n%10
        n = n//10
    return sum

def getVal(n):
    return ((getSum(n)%10)*(-1))%10

if __name__ == "__main__":
    test = int(input())
    for _ in range(test):
        n = int(input())

        ans = n*10 + getVal(n)
        print(ans)