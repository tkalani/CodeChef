import math
t =int(input())
while(t):
	t-=1
	arr=list(map(int,input().split()))
	n=arr[0]
	m=arr[1]
	k=arr[2]
	if(n==1 and m==1):
		print(1)
	elif(n==1):
		if(math.gcd(m,k)==1):
			print(n*m)
		else:
			print(-1)
	elif(m==1):
		if(math.gcd(n,k)==1):
			print(n*m)
		else:
			print(-1)
	elif(math.gcd(n,k)==1 and math.gcd(m,k)==1):
		print(n*m)
	else:
		print(-1)	


# def cond1(start_x, start_y, n, m, k):
#     return [start_x, (start_y+k)%m]

# def cond2(start_x, start_y, n, m, k):
#     return [(start_x+k)%n, start_y]

# def cond3(start_x, start_y, n, m, k):
#     return [(start_x+k)%n, (start_y+k)%m]

# def find(start_x, start_y, n, m, k, visited, seq_len):
#     if not visited[start_x][start_y]:
#         cond1_newcoord = cond1(start_x, start_y, n, m, k)
#         if cond1_newcoord != [start_x, start_y]:
#             start_x, start_y = cond1_newcoord
#             visited[start_x][start_y] = True
#             seq_len += 1
#             seq_len = find(start_x, start_y, n, m, k, visited, seq_len+1)
            

#             if seq_len >= n*m:
#                 return seq_len
        
#         cond2_newcoord = cond2(start_x, start_y, n, m, k)
#         if cond2_newcoord != [start_x, start_y]:
#             start_x, start_y = cond2_newcoord
#             visited[start_x][start_y] = True
#             seq_len += 1
#             seq_len = find(start_x, start_y, n, m, k, visited, seq_len+1)

#             if seq_len >= n*m:
#                 return seq_len
        
#         cond3_newcoord = cond3(start_x, start_y, n, m, k)
#         if cond3_newcoord != [start_x, start_y]:
#             start_x, start_y = cond3_newcoord
#             visited[start_x][start_y] = True
#             seq_len += 1
#             seq_len = find(start_x, start_y, n, m, k, visited, seq_len+1)

#             if seq_len >= n*m:
#                 return seq_len
#     return seq_len

    

# def findSequence(n, m, k):
#     for i in range(n):
#         for j in range(m):
#             visited = [[False for i in range(m)] for j in range(n)]
#             if find(i, j, n, m, k, visited, 1) >= n*m:
#                 return True
#     return False

# for _ in range(int(input())):
#     n, m, k = list(map(int, input().strip().split(' ')))

#     length = findSequence(n, m, k)
#     print(n*m) if length else print(-1)