import numpy as np

N, Q = map(int, sys.stdin.readline().split())
coins = np.zeros(N,dtype = bool)
    
while Q>0:
    
    Q-=1
    input_,A,B = map(int,sys.stdin.readline().split())
    if input_ == 0:
        coins[A:B+1] = ~coins[A:B+1]
    else:
        print(coins[A:B+1].sum())