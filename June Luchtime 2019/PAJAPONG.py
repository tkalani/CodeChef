for _ in range(int(input())):
    x, y, k = list(map(int, input().strip().split(' ')))

    rem = ((x%k)+(y%k))%k
    quo = (x+y)//k

    if quo%2:
        print("Paja")
    else:
        print("Chef")