for _ in range(int(input())):
    n, m = list(map(int, input().strip().split(' ')))

    dishes = []

    for i in range(n):
        dishes.append(list(map(int, input().strip().split(' '))))
    
    dishes = sorted(dishes, key=lambda x: x[1])

    taste = dishes[-1][1]

    day1 = dishes[-1][0]
    i=n-1
    while dishes[i][0] == day1:
        i -= 1
    taste += dishes[i][1]

    print(taste)