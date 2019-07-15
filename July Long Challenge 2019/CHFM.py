for _ in range(int(input())):
    n = int(input())

    arr = list(map(int, input().strip().split(' ')))
    avg = sum(arr)/n

    if avg in arr:
        print(arr.index(avg)+1)
    else:
        print("Impossible")