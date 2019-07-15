for _ in range(int(input())):
    n, q = list(map(int, input().strip().split(' ')))

    A = [i+1 for i in range(n)]

    s = 0

    for query_num in range(q):
        arr = list(map(int, input().strip().split(' ')))

        if arr[0] == 1:
            x = arr[1]+s
            A[x-1] = 0
        elif arr[0] == 2:
            p, q = arr[1], arr[2]
            l, r = p+s, q+s
            max_el = max(A[l-1:r])
            s += max_el
            s = s%n
            print(max_el)