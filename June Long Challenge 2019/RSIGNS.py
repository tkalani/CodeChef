# for _ in range(int(input())):
#     n = int(input())

#     print(5*pow(2, n))

MOD = 1000000007
arr = {}

arr[1] = 10

for _ in range(int(input())):
    n = int(input())

    # for i in range(1, n):
    #     print(5*pow(2, i))

    if arr.get(n):
        print(arr[n]) if(n==1) else print(arr[n]-1)
    else:
        for i in range(list(arr.keys())[-1]+1, n+1):
            arr[i] = (arr[i-1] + 10*pow(2, i-2))%MOD
        print(arr[n]) if(n==1) else print(arr[n]-1)