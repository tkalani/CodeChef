import sys
n=input()
budget=[]
for _ in range(n):
	budget.append(input())
budget.sort()
max=-1
revenue=0
for i in range(n):
	revenue=budget[i]*(n-i)
	if max<revenue:
		max=revenue
print max