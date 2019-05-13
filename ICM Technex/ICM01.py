t = int(input())

for _ in range(t):
    n, k = map(int, input().strip().split(' '))
    print((k*(k+1))//2 + n-k)