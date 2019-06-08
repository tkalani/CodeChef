def findGCD(x, y):
    while(y): 
        x, y = y, x % y 
    return x

def findArrayGCD(arr):
    if len(arr)==1:
        return arr[0]
    else:
        gcd = findGCD(arr[0], arr[1])
        for i in range(2, len(arr)):
            gcd = findGCD(gcd, arr[i])
        return gcd

def sub_lists(list1): 
    sublist = [] 
    for i in range(len(list1) + 1): 
        for j in range(i + 1, len(list1) + 1): 
            sub = list1[i:j] 
            if(len(arr)):
                sublist.append([sub, list1-sub])       
    return sublist 

for _ in range(int(input())):
    length = int(input())
    arr = list(map(int, input().strip().split(' ')))

    # print(sub_lists(arr))
    # arr = sorted(sub_lists(arr))
    # print(arr[-1]+arr[-2])

    print(sub_lists(arr))