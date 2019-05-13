mod = 1000000007

arr = [0 for i in range(1000000)]
arr[0] = 1

for _ in range(int(input())):
    n = int(input())

    if arr[n-1] != 0:
        print(arr[n-1]%mod)
    else:
        for i in range(1, n):
            arr[i] = (i+1 + arr[i-1] + (i+1)*arr[i-1])%mod
            print(str(i) + " --> " + str(arr[i]%mod))
        print(arr[n-1]%mod)