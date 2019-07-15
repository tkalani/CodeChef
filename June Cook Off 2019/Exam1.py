for _ in range(int(input())):
    N = int(input())
    S = input()
    U = input()
    score = 0

    i = 0
    while i <= N-1:
        if U[i] == 'N':
            score += 0
        elif U[i] == S[i]:
            score += 1
        elif U[i] != S[i]:
            # if U[i+1] == S[i+1]:
            #     i += 1
            i += 1
        i += 1
    
    print(score)