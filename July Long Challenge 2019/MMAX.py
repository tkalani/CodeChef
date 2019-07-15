for _ in range(int(input())):
    n = int(input())
    k = int(input())

    arr = ''

    if k<=n:
        arr = [1]*k + [0]*(n-k)
    else:
        arr = [k//n]*n
        rem = k%n

        if rem:
            for i in range(n-rem, n):
                arr[i] += 1
        
    # arr.sort()

    # print(arr)

    j = 0
    finalSequence = [0 for x in range(n)]
    for i in range(0, n//2): 
        finalSequence[j] = arr[i] 
        finalSequence[j+1] = arr[n-i-1] 
        j += 2

    MaximumSum = 0

    for i in range(0, n - 1):  
        MaximumSum = (MaximumSum+abs(finalSequence[i]-finalSequence[i+1]))
    
    MaximumSum = (MaximumSum+abs(finalSequence[n-1]-finalSequence[0]))

    print(MaximumSum)