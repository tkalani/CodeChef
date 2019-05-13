for _ in range(int(input())):
    length = int(input())
    S, X = input().strip().split(' ')
    final_count, count = 0, 0
    for i in range(length):
        if S[i] == X:
            count = i+1
        final_count += count
    print(final_count)