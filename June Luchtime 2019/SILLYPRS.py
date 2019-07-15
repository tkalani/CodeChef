for _ in range(int(input())):
    n = int(input())

    A = list(map(int, input().strip().split(' ')))
    B = list(map(int, input().strip().split(' ')))

    even_A, even_B, odd_A, odd_B = [], [], [], []

    for i in range(n):
        even_A.append(A[i]) if A[i]%2==0 else odd_A.append(A[i])
        even_B.append(B[i]) if B[i]%2==0 else odd_B.append(B[i])

    # print(even_A, odd_A)
    # print(even_B, odd_B)

    A = even_A + odd_A
    B = even_B + odd_B

    # print(A)
    # print(B)

    sum = 0
    for i in range(n):
        sum += (A[i]+B[i])//2

    print(sum)