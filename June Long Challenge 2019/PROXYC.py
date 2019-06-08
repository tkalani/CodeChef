import math

def checkCondition(S, day, day1, day2):
    if S[day1]=='P' or S[day2]=='P':
        return True
    return False

for _ in range(int(input())):
    length = int(input())
    S = list(input())

    min_days = math.ceil(length*0.75)

    present_days = S.count('P')
    count = 0

    if present_days >= min_days:
        print(0)
    else:
        flag = False
        for i in range(2, length-2):
            if S[i] == 'A':
                if checkCondition(S, i, i-1, i-2) and checkCondition(S, i, i+1, i+2):
                    count += 1
                if present_days+count >= min_days:
                    flag = True
                    break
        print(count) if flag else print(-1)