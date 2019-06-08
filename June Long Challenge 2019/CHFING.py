MOD = 1000000007

for _ in range(int(input())):
    n, k = list(map(int, input().strip().split(' ')))

    if n==2:
        ans = (k-1 + ((k-1)*(k-2))//2)%MOD
    elif n==3:
        ans = (k-1+1)%MOD
    else:
        ans = (k-1)%MOD
    print(ans)